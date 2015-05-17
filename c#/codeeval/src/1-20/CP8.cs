using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace codeeval
{
#if _EDITOR
	public class CP8 : CProblem
	{
		private const string mc_strName = "Reverse Words";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/8/";
		private const int mc_nNumber = 8;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;
		public CP8() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/8_in.txt");
#else
	class Problem
	{
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif
			string t_strLine;

			while (!t_reader.EndOfStream)
			{
				t_strLine = t_reader.ReadLine();
				if (t_strLine == null)
				{
					continue;
				}

				string[] t_strs = t_strLine.Split(' ');

				for (int t_i = t_strs.Length - 1; t_i >= 0; --t_i)
				{
					Console.Write(t_strs[t_i] + " ");
				}
				Console.WriteLine();
			}
		}
	}
}
