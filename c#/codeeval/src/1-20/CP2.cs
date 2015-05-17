using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace codeeval
{

#if _EDITOR

	public class CP2 : CProblem
	{

#else
	class Problem
	{
#endif

		public static void vSortAndPrint(List<String> p_aryStrLines, int p_c)
		{
			int t_nLength = p_aryStrLines.Count;

			bool t_fSwapped = false;

			do
			{
				t_fSwapped = false;

				for (int t_i = 1; t_i < t_nLength; ++t_i)
				{
					if (p_aryStrLines[t_i - 1].Length < p_aryStrLines[t_i].Length)
					{
						String p_str = p_aryStrLines[t_i - 1];
						p_aryStrLines[t_i - 1] = p_aryStrLines[t_i];
						p_aryStrLines[t_i] = p_str;
						t_fSwapped = true;
					}
				}
			}
			while (t_fSwapped);

			for (int t_i = 0; t_i < p_c; ++t_i)
			{
				Console.WriteLine(p_aryStrLines[t_i]);
			}
		}

#if _EDITOR
		private const string mc_strName = "Longest Lines";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/2/";
		private const int mc_nNumber = 2;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;
		
		public CP2() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}
		
		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/2_in.txt");

#else
		static void Main(string[] args)
		{
			StreamReader t_reader = File.OpenText(args[0]);
#endif

			int t_nLines = Int32.Parse(t_reader.ReadLine());

			List<String> t_aryStrLines = new List<string>();
			
			while (!t_reader.EndOfStream)
			{
				string t_line = t_reader.ReadLine();
	
				if (t_line == null)
				{
					continue;
				}

				t_aryStrLines.Add(t_line);
			}

			vSortAndPrint(t_aryStrLines, t_nLines);

			t_reader.Close();
		}
	}
}
