using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.IO;
using System.IO.Pipes;

namespace codeeval.src
{
	public class CConsoleHelper
	{
		private String m_strName;
		private NamedPipeClientStream m_namedPipe;

		public CConsoleHelper(String p_strName)
		{
			m_strName = p_strName;

			// start the process
			vStartProcess();

			// create the client pipe
			vCreatePipe();
		}

		public void vPrint(string p_str)
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_PRINT");
			t_writer.WriteLine(p_str);
		}

		public void vPrintLine(string p_str)
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_PRINTLINE");
			t_writer.WriteLine(p_str);
		}

		public void vSetPos(int p_x, int p_y)
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_MOVEXY");
			t_writer.WriteLine(p_x + " " + p_y);
		}

		public void vSetSize(int p_width, int p_height)
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_SETSIZE");
			t_writer.WriteLine(p_width + " " + p_height);
		}

		public void vSetColors(ConsoleColor p_background, ConsoleColor p_foreground)
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_COLOR");
			t_writer.WriteLine(p_background.ToString() + " " + p_foreground.ToString());
		}

		public void vResetColor()
		{
			StreamWriter t_writer = new StreamWriter(m_namedPipe);
			t_writer.AutoFlush = true;
			t_writer.WriteLine("COMMAND_COLOR_RESET");
			t_writer.WriteLine();
		}

		private void vStartProcess()
		{
			Process runCmd = new Process();
			runCmd.StartInfo.FileName = "ConsoleHelper.exe";
			runCmd.StartInfo.UseShellExecute = true;
			runCmd.StartInfo.RedirectStandardOutput = false;
			runCmd.StartInfo.Arguments = m_strName;

			runCmd.StartInfo.CreateNoWindow = true;
			runCmd.StartInfo.WindowStyle = ProcessWindowStyle.Normal;

			runCmd.Start(); 
		}

		private void vCreatePipe()
		{
			m_namedPipe = new NamedPipeClientStream(".", m_strName, PipeDirection.Out);

			m_namedPipe.Connect();
		}
	}
}
