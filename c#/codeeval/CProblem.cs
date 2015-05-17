using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace codeeval
{
	public class CProblem
#if !_EDITOR
	{
		static void Main(string[] args)
#endif
		{
			public enum EDifficulty
			{
				eDiff_Easy = 0,
				eDiff_Moderate,
				eDiff_Hard,

				eDiff_Max,
				eDiff_Nil = -1
			}

			private string m_strName;
			private string m_strURL;
			private int m_nNumber;
			private bool m_fFinished;
			private EDifficulty m_eDifficulty;

			public CProblem()
			{
			}

			public CProblem(string p_strName, string p_strURL, int p_nNumber, bool p_fFinished, EDifficulty p_eDifficulty)
			{
				m_strName = p_strName;
				m_strURL = p_strURL;
				m_nNumber = p_nNumber;
				m_fFinished = p_fFinished;
				m_eDifficulty = p_eDifficulty;
			}

			public virtual void vRun() { }
		}
#if !_EDITOR
	}
#endif
}
