using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CPPROBLEM_NUMBER : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "PROBLEM_NAME";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/PROBLEM_NUMBER/";
		private const int mc_nNumber = PROBLEM_NUMBER;
		private const bool mc_fFinished = false;
		private const EDifficulty mc_eDifficulty = EDifficulty.PROBLEM_DIFFICULTY;

		public CPPROBLEM_NUMBER() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/PROBLEM_NUMBER_in.txt");
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
			}
		}
	}
}
