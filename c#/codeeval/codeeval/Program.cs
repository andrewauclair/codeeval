using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace codeeval
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.WriteLine("<code_eval> c# solutions");

			int t_nInput = 0;

			while (t_nInput != -1)
			{
				string t_strInput;

				Console.Write("Problem: ");

				t_strInput = Console.ReadLine();

				Console.WriteLine();

				t_nInput = Int32.Parse(t_strInput);

				Type t_type = Type.GetType("codeeval.CP" + t_nInput);

				CProblem t_problem = (CProblem)Activator.CreateInstance(t_type);

				t_problem.vRun();
			}
		}
	}
}
