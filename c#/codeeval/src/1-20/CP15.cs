using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
	
namespace codeeval
{
#if _EDITOR
	public class CP15 : CProblem
	{
#else
	class Problem
	{
#endif

#if _EDITOR
		private const string mc_strName = "Endianness";
		private const string mc_strURL = "https://www.codeeval.com/open_challenges/15/";
		private const int mc_nNumber = 15;
		private const bool mc_fFinished = true;
		private const EDifficulty mc_eDifficulty = EDifficulty.eDiff_Moderate;

		public CP15() : base(mc_strName, mc_strURL, mc_nNumber, mc_fFinished, mc_eDifficulty)
		{
		}

		public override void vRun()
		{
#else
		static void Main(string[] args)
		{
#endif
			if (BitConverter.IsLittleEndian)
			{
				Console.WriteLine("LittleEndian");
			}
			else
			{
				Console.WriteLine("BigEndian");
			}
		}
	}
}
