using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace codeeval
{
#if _EDITOR
	public class CP1 : CProblem
	{
		private const string mc_strName = "Fizz Buzz";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/1/";
		private const int mc_nNumber = 1;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP1() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/1_in.txt");
#else
	class Problem
	{
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif
			int t_nFizz = 0;
			int t_nBuzz = 0;
			int t_nTotal = 0;

			while (!t_reader.EndOfStream)
			{
				string t_line = t_reader.ReadLine();
				if (t_line == null)
				{
					continue;
				}

				string[] t_nums = t_line.Split(' ');
				t_nFizz = Int32.Parse(t_nums[0]);
				t_nBuzz = Int32.Parse(t_nums[1]);
				t_nTotal = Int32.Parse(t_nums[2]);

				for (int t_i = 1; t_i < t_nTotal + 1; ++t_i)
				{
					if (t_i % t_nFizz == 0 && t_i % t_nBuzz == 0)
					{
						Console.Write("FB ");
					}
					else if (t_i % t_nFizz == 0)
					{
						Console.Write("F ");
					}
					else if (t_i % t_nBuzz == 0)
					{
						Console.Write("B ");
					}
					else
					{
						Console.Write(t_i + " ");
					}
				}

				Console.WriteLine();
			}

			t_reader.Close();
		}
	}
}
