using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP23 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Multiplication Tables";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/23/";
		private const int mc_nNumber = 23;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP23() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
#else
		static void Main(string[] args)
		{
#endif
			for (int t_i = 1; t_i <= 12; ++t_i)
			{
				Console.Write(t_i);

				for (int t_j = 2; t_j <= 12; ++t_j)
				{
					Console.Write(String.Format("{0,4}", t_i * t_j));
				}
				Console.WriteLine();
			}
			
		}
	}
}
