// See https://aka.ms/new-console-template for more information
using System;
namespace Exercise3
{
    class FromConsoleOne
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Introduce the numbers less than 100 but grather than 0: ");
            string numberA = Console.ReadLine();
            Console.WriteLine("Your second number: ");
            string numberB = Console.ReadLine();
            int numberConvertA = Convert.ToInt32(numberA);
            int numberConvertB = Convert.ToInt32(numberB);
            if (numberConvertA > 0 && numberConvertB <= 100 || numberConvertB > 0 && numberConvertA <= 100) {
                Console.WriteLine("You are in the right range");
            } else {
                Console.WriteLine("Your numbers are wrong");
            }
        }
    }
}
