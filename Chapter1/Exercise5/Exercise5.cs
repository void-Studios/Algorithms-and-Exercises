using System;

namespace Chapter1
{
    public class Exercise5
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Type your index numbers: ");
            string valueOne = Console.ReadLine();
            string valueTwo = Console.ReadLine();
            //Converting
            int numberOne = Convert.ToInt32(valueOne);
            int numberTwo = Convert.ToInt32(valueTwo);

            Console.WriteLine("Your index numbers are: \n" + numberOne + "\n" + numberTwo);
        }
    }
}
