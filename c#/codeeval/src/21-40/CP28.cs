using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP28 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "String Searching";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/28/";
		private const int mc_nNumber = 28;
		private const bool mc_fFinished = false;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Hard;

		public CP28() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/28_in.txt");
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

				string[] t_aStrs = t_line.Split(',');
				string t_str = t_aStrs[0];
				string t_strSearch = t_aStrs[1];

				int t_c = 0;
				bool t_fFound = false;

				for (int t_j = 0; t_j < t_str.Length; ++t_j)
				{
					if (t_str[t_j] == t_strSearch[t_c])// || (t_strSearch[t_c] == '*' && (t_c > 0 && t_strSearch[t_c - 1] != '\\')))
					{
						t_c++;

						if (t_c >= t_strSearch.Length)
						{
							t_fFound = true;
							break;
						}
					}
					else if (t_str[t_j] == '*' && t_strSearch[t_c] == '\\' && (t_c + 1 < t_strSearch.Length && t_strSearch[t_c + 1] == '*'))
					{
						t_c++;
					}
					else if (t_strSearch[t_c] == '*' && ((t_c > 0 && t_strSearch[t_c - 1] != '\\') || t_c == 0))
					{
						t_c++;

						while (t_str[t_j] != t_strSearch[t_c] && t_j < t_str.Length)
						{
							t_j++;
						}

						t_c++;
					}
					else
					{
						t_c = 0;
					}
				}

				if (t_fFound)
				{
					Console.WriteLine("true");
				}
				else
				{
					Console.WriteLine("false");
				}
			}
		}
	}
}
