using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.IO;
using codeeval.src;
using System.Runtime.InteropServices;

namespace codeeval
{
	class Program
	{
		// Consoles
		private static CConsoleOutput m_consoleOutput;
		private static CConsoleHelper m_consoleInput;

		private const int SWP_NOSIZE = 0x0001;
		private const int SWP_NOZORDER = 0x0004;

		private const int SM_CXSCREEN = 0;
		private const int SM_CYSCREEN = 1;

		[DllImport("kernel32.dll", ExactSpelling = true)]
		private static extern IntPtr GetConsoleWindow();

		private static IntPtr ms_console = GetConsoleWindow();

		[DllImport("user32.dll", EntryPoint = "GetWindowRect")]
		public static extern void GetWindowRect(IntPtr hWnd, ref Rect rect);

		[DllImport("user32.dll", EntryPoint = "SetWindowPos")]
		public static extern IntPtr SetWindowPos(IntPtr hWnd, int hWndInsertAfter, int x, int y, int cx, int cy, int wFlags);

		[DllImport("user32.dll", EntryPoint = "SetForegroundWindow")]
		public static extern Boolean SetForegroundWindow(IntPtr hWnd);

		[DllImport("user32.dll", EntryPoint = "GetSystemMetrics")]
		public static extern int GetSystemMetrics(int nIndex);

		public struct Rect
		{
			public int Left { get; set; }
			public int Top { get; set; }
			public int Right { get; set; }
			public int Bottom { get; set; }
		}

		static void Main(string[] args)
		{
			vCreateConsoles();

			Console.WriteLine("<code_eval> c# solutions");

			int t_nInput = 0;
			TextWriter t_origOut = Console.Out;

			while (t_nInput != -1)
			{
				string t_strInput;

				Console.Write("Problem: ");

				t_strInput = Console.ReadLine();

				Console.WriteLine();

				t_nInput = Int32.Parse(t_strInput);

				// output
				string t_strExpected = File.ReadAllText("out/" + t_nInput + "_out.txt");

				Type t_type = Type.GetType("codeeval.CP" + t_nInput);

				CProblem t_problem = (CProblem)Activator.CreateInstance(t_type);

				StringWriter t_writer = new StringWriter();
				Console.SetOut(t_writer);
				t_problem.vRun();
				t_writer.Flush();
				Console.SetOut(t_origOut);
				m_consoleOutput.fCompare(t_writer.GetStringBuilder().ToString(), t_strExpected);
			}
		}

		static void vCreateConsoles()
		{
			Rect t_rect = new Rect();
			GetWindowRect(ms_console, ref t_rect);

			m_consoleOutput = new CConsoleOutput();
			m_consoleInput = new CConsoleHelper("Input");

			int t_nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
			int t_nScreenHeight = GetSystemMetrics(SM_CYSCREEN);

			int t_nConsoleWidth = t_rect.Right - t_rect.Left;
			int t_nConsoleHeight = t_rect.Bottom - t_rect.Top;

			int t_x = (t_nScreenWidth / 2 - t_nConsoleWidth);
			int t_y = (t_nScreenHeight / 2 - t_nConsoleHeight);

			SetWindowPos(ms_console, 0, t_x, t_y, 0, 0, SWP_NOZORDER | SWP_NOSIZE);

			// position the consoles
			m_consoleInput.vSetPos(t_x, t_y + t_nConsoleHeight);
			m_consoleOutput.vSetPos(t_x + t_nConsoleWidth, t_y);

			m_consoleOutput.vSetSize(t_nConsoleWidth, t_nConsoleHeight * 2);

			SetForegroundWindow(ms_console);
		}
	}
}
