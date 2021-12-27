using System;
class Exercise14
{
    static void Main(String[] args) 
    {
        Console.WriteLine("Type your favorite three numbers: ");
        string numberA = Console.ReadLine();
        string numberB = Console.ReadLine();
        string numberC = Console.ReadLine();
        //Convert the number to int
        int cNumberA = Convert.ToInt32(numberA);
        int cNumberB = Convert.ToInt32(numberB);
        int cNumberC = Convert.ToInt32(numberC);
        //Display the output
        Console.WriteLine("Your Favorite numbers are {0}  {1}  {2}", cNumberA, cNumberB, cNumberC);
    }
}
