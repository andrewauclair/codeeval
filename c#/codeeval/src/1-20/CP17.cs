using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP17 : CProblem
	{
#else
	public class
	{
#endif

#if _EDITOR
		private const string mc_strName = "Sum of Integers";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/17/";
		private const int mc_nNumber = 17;
		private const bool mc_fFinished = false;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP17() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/17_in.txt");
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
				int[] t_aNums = new int[t_aStrs.Length];

				for (int t_i = 0; t_i < t_aStrs.Length; ++t_i)
				{
					t_aNums[t_i] = Int32.Parse(t_aStrs[t_i]);
				}


			}
		}
	}
}
