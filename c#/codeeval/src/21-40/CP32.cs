using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP32 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Trailing String";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/32/";
		private const int mc_nNumber = 32;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP32() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			StreamReader t_reader = File.OpenText("in/32_in.txt");
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
				string t_strLine = t_aStrs[0];
				string t_str = t_aStrs[1];

				if (t_str.Length <= t_strLine.Length && t_strLine.Substring(t_strLine.Length - t_str.Length, t_str.Length) == t_str)
				{
					Console.WriteLine("1");
				}
				else
				{
					Console.WriteLine("0");
				}
			}
		}
	}
}
