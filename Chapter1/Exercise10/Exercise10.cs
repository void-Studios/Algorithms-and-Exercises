using System;
namespace Chapter1
{
    class Exercise10
    {
        static void Main(String[] args)
        {
            Console.WriteLine("What is your name?");
            string name = Console.ReadLine();
            
            if (name != null)
            {
                Console.WriteLine("Your name and user is: " + name);
            } else {
                Console.WriteLine("Your name is Empty");
            }
        }
    }
}
