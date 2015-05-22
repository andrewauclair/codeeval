using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP13 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Remove Characters";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/13/";
		private const int mc_nNumber = 13;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP13() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/13_in.txt");
#else
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

				string[] t_aStrs = t_line.Split(',');
				string t_str = t_aStrs[0];
				t_aStrs[1] = t_aStrs[1].TrimStart(' ');

				for (int t_i = 0; t_i < t_aStrs[1].Length; ++t_i)
				{
					string t_sub = t_aStrs[1].Substring(t_i, 1);
					t_str = t_str.Replace(t_sub, string.Empty);
				}

				Console.WriteLine(t_str);
			}
		}
	}
}
