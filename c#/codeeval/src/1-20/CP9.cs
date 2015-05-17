using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace codeeval
{
#if _EDITOR
	public class CP9 : CProblem
	{
		private const string mc_strName = "Stack Implementation";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/9/";
		private const int mc_nNumber = 9;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;
		public CP9() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/9_in.txt");
#else
	class Problem
	{
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif
			string t_line;

			while (!t_reader.EndOfStream)
			{
				t_line = t_reader.ReadLine();
				if (t_line == null)
				{
					continue;
				}

				string[] t_strs = t_line.Split(' ');

				for (int t_i = t_strs.Length - 1; t_i >= 0; t_i -= 2)
				{
					Console.Write(t_strs[t_i] + " ");
				}
				Console.WriteLine();
			}
		}
	}
}
