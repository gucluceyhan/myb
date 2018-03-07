﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace e7
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> liste = new List<int>();
            liste.AddRange(Enumerable.Range(1, 10));

            var ciftler = liste.Where(x => x % 2 == 0);
            ciftler.ToList().ForEach((int x) => Console.WriteLine(x));
        }
    }
}
