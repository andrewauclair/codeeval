using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP16 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Number of Ones";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/16/";
		private const int mc_nNumber = 16;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP16() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/16_in.txt");
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

				string t_strBits = Convert.ToString(Int32.Parse(t_line), 2);

				int t_c = 0;
				for (int t_i = 0; t_i < t_strBits.Length; ++t_i)
				{
					if (t_strBits[t_i] == '1')
					{
						t_c++;
					}
				}
				Console.WriteLine(t_c);
			}
		}
	}
}
