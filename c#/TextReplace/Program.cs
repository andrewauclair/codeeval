using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace TextReplace
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.Write("TextReplace ");

			for (int t_i = 0; t_i < args.Length; ++t_i)
			{
				Console.Write(args[t_i] + " ");
			}
			Console.WriteLine();

			StreamReader t_reader = new StreamReader(args[0]);
			List<string> t_aStrs = new List<string>();

			while (!t_reader.EndOfStream)
			{
				string t_line = t_reader.ReadLine();
				t_aStrs.Add(t_line);
			}

			t_reader.Close();

			int t_nArg = 1;

			// replace all args[t_nArg] with args[t_nArg + 1]
			while (t_nArg + 1 < args.Length)
			{
				Console.WriteLine("Replace \"" + args[t_nArg] + "\" with \"" + args[t_nArg + 1] + "\"");

				for (int t_i = 0; t_i < t_aStrs.Count; ++t_i)
				{
					t_aStrs[t_i] = t_aStrs[t_i].Replace(args[t_nArg], args[t_nArg + 1]);
				}

				t_nArg += 2;
			}

			StreamWriter t_writer = new StreamWriter(args[0], false);

			for (int t_i = 0; t_i < t_aStrs.Count; ++t_i)
			{
				t_writer.WriteLine(t_aStrs[t_i]);
			}

			t_writer.Close();

			Console.ReadKey();
		}
	}
}
