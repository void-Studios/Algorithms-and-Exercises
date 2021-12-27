using System;

class Exercise13
{
    static void Main(String[] args)
    {
        Console.WriteLine("Introduce your magic number: ");
        string readValue = Console.ReadLine();
        int value = Convert.ToInt32(readValue);
        //Formula
        int nextValue = value + 1;
        int beforeValue = value - 1;
        //Output
        Console.WriteLine($"The next number of {value} is {nextValue}");
        Console.WriteLine($"The before number of {value} is {beforeValue}"); 
    }
}
