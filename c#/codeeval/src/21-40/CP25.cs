using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP25 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Odd Numbers";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/25/";
		private const int mc_nNumber = 25;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP25() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
#else
		static void Main(string[] args)
		{
#endif
			for (int t_i = 1; t_i < 100; t_i += 2)
			{
				Console.WriteLine(t_i);
			}
		}
	}
}
