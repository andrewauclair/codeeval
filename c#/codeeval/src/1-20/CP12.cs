using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP12 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "First Non-Repeated Character";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/12/";
		private const int mc_nNumber = 12;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP12() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/12_in.txt");
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

				for (int t_i = 0; t_i < t_line.Length; ++t_i)
				{
					int t_c = t_line.Count(c => c == t_line[t_i]);

					if (t_c > 1)
					{
						t_line = t_line.Replace(t_line.Substring(t_i, 1), string.Empty);
					}
				}

				Console.WriteLine(t_line[0]);
			}
		}
	}
}
