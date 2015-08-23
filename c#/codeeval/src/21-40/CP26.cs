using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP26 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "File Size";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/26/";
		private const int mc_nNumber = 26;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Easy;

		public CP26() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
			FileInfo t_info = new FileInfo("in/26_in.txt");
#else
		static void Main(string[] args)
		{
			FileInfo t_info = new FileInfo(args[0]);
#endif
			Console.WriteLine(t_info.Length);
		}
	}
}
