using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP18 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Multiples of a Number";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/18/";
		private const int mc_nNumber = 18;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP18() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/18_in.txt");
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

				int t_nNum = Int32.Parse(t_aStrs[1]);
				int t_nResult = t_nNum;
				int t_nCap = Int32.Parse(t_aStrs[0]);
				while (t_nResult < t_nCap)
				{
					t_nResult += t_nNum;
				}

				Console.WriteLine(t_nResult);
			}
		}
	}
}
