using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.IO.Pipes;

namespace codeeval.src
{
	public class CConsoleOutput : CConsoleHelper
	{
		public CConsoleOutput()
			: base("Output")
		{
		}

		public bool fCompare(string p_strOutput, string p_strExpected)
		{
			bool t_fSame = true;
			string[] t_aOut = p_strOutput.Split(new string[] { Environment.NewLine }, StringSplitOptions.None);
			string[] t_aExpected = p_strExpected.Split(new string[] { Environment.NewLine }, StringSplitOptions.None);

			for (int t_i = 0; t_i < t_aOut.Length; ++t_i)
			{
				string t_str = t_aOut[t_i];
				t_str = t_str.TrimEnd(' ');

				for (int t_j = 0; t_j < t_str.Length; ++t_j)
				{
					if (t_i < t_aExpected.Length && t_j < t_aExpected[t_i].Length)
					{
						if (t_str[t_j] == t_aExpected[t_i][t_j])
						{
							vSetCorrectOut();
						}
						else
						{
							vSetIncorrectOut();
						}
					}
					else
					{
						vSetIncorrectOut();
					}

					vPrint(t_str.Substring(t_j, 1));
				}
				vPrintLine("");
			}

			return false;
		}

		private void vSetIncorrectOut()
		{
			vSetColors(ConsoleColor.Red, ConsoleColor.White);
		}

		private void vSetCorrectOut()
		{
			vSetColors(ConsoleColor.Black, ConsoleColor.White);
		}
	}
}
