using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace codeeval
{
#if _EDITOR
	public class CP3 : CProblem
	{

#else
	class Problem
	{
#endif

		public static bool isPrime(ulong p_nNum)
		{
			for (ulong t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
			{
				if (p_nNum % t_i == 0 && p_nNum != t_i)
				{
					return false;
				}
			}

			return true;
		}

		public static bool isPalindrome(string p_str)
		{
			for (int t_i = 0; t_i < p_str.Length / 2; ++t_i)
			{
				if (p_str[t_i] != p_str[p_str.Length - 1 - t_i])
				{
					return false;
				}
			}

			return true;
		}

#if _EDITOR
		private const string mc_strName = "Prime Palindrome";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/3/";
		private const int mc_nNumber = 3;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;
		public CP3() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		public override void vRun()
		{
#else
		static void Main(string[] args)
		{
#endif
			for (ulong t_i = 999; t_i > 0; --t_i)
			{
				if (isPrime(t_i))
				{
					if (isPalindrome(t_i.ToString()))
					{
						Console.WriteLine(t_i);
						break;
					}
				}
			}
		}
	}
}
