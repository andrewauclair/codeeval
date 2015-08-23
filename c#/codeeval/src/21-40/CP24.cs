using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP24 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Sum of Integers From File";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/24/";
		private const int mc_nNumber = 24;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP24() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/24_in.txt");
#else
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif
			int t_nTotal = 0;

			while (!t_reader.EndOfStream)
			{
				string t_line = t_reader.ReadLine();
				if (t_line == null)
				{
					continue;
				}

				t_nTotal += Int32.Parse(t_line);
			}

			Console.WriteLine(t_nTotal);
		}
	}
}
