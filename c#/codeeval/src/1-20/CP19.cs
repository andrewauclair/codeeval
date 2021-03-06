using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP19 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Bit Positions";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/19/";
		private const int mc_nNumber = 19;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP19() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/19_in.txt");
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

				string t_strBits = Convert.ToString(Int32.Parse(t_aStrs[0]), 2);

				if (t_strBits[t_strBits.Length - Int32.Parse(t_aStrs[1])] == t_strBits[t_strBits.Length - Int32.Parse(t_aStrs[2])])
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
