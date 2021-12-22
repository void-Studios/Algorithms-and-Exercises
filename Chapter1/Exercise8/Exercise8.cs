using System;
namespace Chapter1
{
    class Exercise4
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Type your number: ");
            string value = Console.ReadLine();
            int valueConverted = Convert.ToInt32(value);
            Console.WriteLine("You have entered a number " + valueConverted);
        }
    }
}
