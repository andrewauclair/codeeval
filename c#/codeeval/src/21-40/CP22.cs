using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP22 : CProblem
	{
#else
	class Problem
	{
#endif

		public static int nFib(int p_nNum)
		{
			if (p_nNum < 2)
			{
				return p_nNum;
			}

			return nFib(p_nNum - 1) + nFib(p_nNum - 2);
		}

#if _EDITOR
		private const string mc_strName = "Fibonacci Series";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/22/";
		private const int mc_nNumber = 22;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP22() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/22_in.txt");
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

				Console.WriteLine(nFib(Int32.Parse(t_line)));
			}
		}
	}
}
