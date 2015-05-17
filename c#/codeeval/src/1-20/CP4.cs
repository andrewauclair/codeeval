using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace codeeval
{
#if _EDITOR
	public class CP4 : CProblem
	{
#else
	class Problem
	{
#endif

		public static bool isPrime(int p_nNum)
		{
			for (int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
			{
				if (p_nNum % t_i == 0 && p_nNum != t_i)
				{
					return false;
				}
			}

			return true;
		}

#if _EDITOR

		private const string mc_strName = "Sum of Primes";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/4/";
		private const int mc_nNumber = 4;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;
		public CP4() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		public override void vRun()
		{
#else
		static void Main(string[] args)
		{
#endif
			int t_nNum = 2;
			int t_nPrimes = 0;
			int t_nTotal = 0;

			while (t_nPrimes < 1000)
			{
				if (isPrime(t_nNum))
				{
					t_nPrimes++;
					t_nTotal += t_nNum;
				}

				t_nNum++;
			}

			Console.WriteLine(t_nTotal);
		}
	}
}
