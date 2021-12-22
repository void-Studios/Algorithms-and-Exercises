using System;
namespace Chapter1
{
    class Exercise9
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Type three numbers: ");
            string valueA = Console.ReadLine();
            string valueB = Console.ReadLine();
            string valueC = Console.ReadLine();
            //Converting
            double conValueA = Convert.ToDouble(valueA);
            double conValueB = Convert.ToDouble(valueB);
            double conValueC = Convert.ToDouble(valueC);
            if (valueA != null && valueB != null && valueC != null) {
                Console.WriteLine(conValueA + " " + conValueB + " " + conValueC + " Here are your numbers");
            } else {
                Console.WriteLine("Something was wrong, maybe you did not set a number");
            }
            
        }
    }
}
