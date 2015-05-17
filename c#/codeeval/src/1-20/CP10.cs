using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace codeeval
{
#if _EDITOR
	public class CP10 : CProblem
	{
		private const string mc_strName = "Mth to Last Element";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/10/";
		private const int mc_nNumber = 10;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;
		public CP10() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/10_in.txt");
#else
	class Problem
	{
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif
			
			while (!t_reader.EndOfStream)
			{
				string t_line = t_reader.ReadLine();
				if (t_line == null)
				{
					continue;
				}

				string[] t_strs = t_line.Split(' ');

				int t_nIndex = Int32.Parse(t_strs[t_strs.Length - 1]);

				if (t_strs.Length - 1 - t_nIndex >= 0 && t_strs.Length - 1 - t_nIndex < t_strs.Length - 1)
				{
					Console.Write(t_strs[t_strs.Length - 1 - t_nIndex]);
				}
				Console.WriteLine();
			}
		}
	}
}
