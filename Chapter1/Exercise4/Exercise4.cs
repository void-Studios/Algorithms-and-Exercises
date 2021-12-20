using System;

namespace  Exercise4Chapter1
{
    public class ExerciseFour
    {
        static void Main(String[]  args)
        {
            Console.WriteLine("Introduce three numbers between 0 and 22");
            string valueOne = Console.ReadLine();
            string valueTwo = Console.ReadLine();
            string valueThree = Console.ReadLine();
            //Converting numbers to Integers
            int valueOneConverted = Convert.ToInt32(valueOne);
            int valueTwoConverted = Convert.ToInt32(valueTwo);
            int valueThreeConverted = Convert.ToInt32(valueThree);
            //Conditional
            if (valueOneConverted > 0 && valueOneConverted < 22 || valueTwoConverted > 0 && valueTwoConverted < 22 || valueThreeConverted > 0 && valueThreeConverted < 22)
            {
                Console.WriteLine("You has typed the numbers" + valueOneConverted + ", " + valueTwoConverted + " and " + valueThreeConverted + " You are in the right range!" );
            } else 
            {
                Console.WriteLine("Some number is not in the range");
            }
        }
        
    }
}
