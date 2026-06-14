// See https://aka.ms/new-console-template for more information
// Console.WriteLine("Hello, World!");

using System;
using System.Linq;
class Program
{
    static void Main(string[] args)
    {
        int[] array = { 1, -1, 2, -2, 3, -3 };
        Console.WriteLine(array.Where(c => c < 0).ElementAt(1));
    }
}