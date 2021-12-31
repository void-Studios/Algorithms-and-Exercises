using System;
class Exercise15 
{
    static void Main(String[] args)
    {
        Console.WriteLine("Enter your four favorite numbers (from 0 to 255): ");
        string a = Console.ReadLine();
        string b = Console.ReadLine();
        string c = Console.ReadLine();
        string d = Console.ReadLine();
        //Convert the numbers
        byte converA = Convert.ToByte(a);
        byte converB = Convert.ToByte(b);
        byte converC = Convert.ToByte(c);
        byte converD = Convert.ToByte(d);
        //Output
        Console.WriteLine("The numbers are: {0} {1} {2} {3}", converA, converB, converC, converD);
    }
}
