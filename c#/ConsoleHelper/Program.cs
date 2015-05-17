using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.IO;
using System.IO.Pipes;
using System.Runtime.InteropServices;

namespace ConsoleHelper
{
	class Program
	{
		private static NamedPipeServerStream m_namedPipe;
		private readonly static string[] mc_aStrCommands = { "COMMAND_PRINT", "COMMAND_PRINTLINE", "COMMAND_CLEAR_SCREEN", "COMMAND_GOTOXY", "COMMAND_MOVEXY", "COMMAND_SETSIZE", "COMMAND_COLOR", "COMMAND_COLOR_RESET" };

		private const int SWP_NOSIZE = 0x0001;

		[DllImport("kernel32.dll", ExactSpelling = true)]
		private static extern IntPtr GetConsoleWindow();

		private static IntPtr ms_console = GetConsoleWindow();

		[DllImport("user32.dll", EntryPoint = "SetWindowPos")]
		public static extern IntPtr SetWindowPos(IntPtr hWnd, int hWndInsertAfter, int x, int y, int cx, int cy, int wFlags);

		[DllImport("user32.dll", EntryPoint = "MoveWindow")]
		public static extern Boolean MoveWindow(IntPtr hWnd, int x, int y, int width, int height, Boolean repaint);

		[DllImport("user32.dll", EntryPoint = "GetWindowRect")]
		public static extern void GetWindowRect(IntPtr hWnd, ref Rect rect);

		public struct Rect
		{
			public int Left { get; set; }
			public int Top { get; set; }
			public int Right { get; set; }
			public int Bottom { get; set; }
		}

		static void Main(string[] args)
		{
			m_namedPipe = new NamedPipeServerStream(args[0], PipeDirection.In);
			m_namedPipe.WaitForConnection();

			string t_strCommand = "";

			using (StreamReader t_reader = new StreamReader(m_namedPipe))
			{
				string t_str;
				while ((t_str = t_reader.ReadLine()) != null)
				{
					bool t_fCommand = false;
					
					for (int t_i = 0; t_i < mc_aStrCommands.Length; ++t_i)
					{
						if (t_str.CompareTo(mc_aStrCommands[t_i]) == 0)
						{
							t_fCommand = true;
						}
					}

					if (t_fCommand)
					{
						t_strCommand = t_str;
					}
					else
					{
						// process the command
						if (t_strCommand.CompareTo("COMMAND_PRINT") == 0)
						{
							Console.Write(t_str);
						}
						else if (t_strCommand.CompareTo("COMMAND_PRINTLINE") == 0)
						{
							Console.WriteLine(t_str);
						}
						else if (t_strCommand.CompareTo("COMMAND_CLEAR_SCREEN") == 0)
						{
							Console.Clear();
						}
						else if (t_strCommand.CompareTo("COMMAND_GOTOXY") == 0)
						{
						}
						else if (t_strCommand.CompareTo("COMMAND_MOVEXY") == 0)
						{
							string[] t_aStrs = t_str.Split(' ');
							SetWindowPos(ms_console, 0, Int32.Parse(t_aStrs[0]), Int32.Parse(t_aStrs[1]), 0, 0, SWP_NOSIZE);
						}
						else if (t_strCommand.CompareTo("COMMAND_SETSIZE") == 0)
						{
							Rect t_rect = new Rect();
							GetWindowRect(ms_console, ref t_rect);

							string[] t_aStrs = t_str.Split(' ');
							MoveWindow(ms_console, t_rect.Left, t_rect.Top, Int32.Parse(t_aStrs[0]), Int32.Parse(t_aStrs[1]), true);
						}
						else if (t_strCommand.CompareTo("COMMAND_COLOR") == 0)
						{
							string[] t_aStrs = t_str.Split(' ');
							ConsoleColor t_background = (ConsoleColor)Enum.Parse(typeof(ConsoleColor), t_aStrs[0]);
							ConsoleColor t_foreground = (ConsoleColor)Enum.Parse(typeof(ConsoleColor), t_aStrs[1]);

							Console.BackgroundColor = t_background;
							Console.ForegroundColor = t_foreground;
						}
						else if (t_strCommand.CompareTo("COMMAND_COLOR_RESET") == 0)
						{
							Console.ResetColor();
						}

						t_strCommand = "";
					}
				}
			}
		}
	}
}
