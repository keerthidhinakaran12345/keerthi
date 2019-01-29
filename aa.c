using System; 
class ap  
{ 
    public static int Nth_of_Arithmatic progression(int N,  int a,  int d) 
    {  
       
        return ( a + (N - 1) * d ); 
    } 
  
    public static void Main()  
    {  
        int a = 2;  
        int d = 1; 
        int N = 5; 
        Console.WriteLine("The "+ N +  "th term of the series is : " +  Nth_of_Arithmetic Progression(N,a,d)); 
    } 
} 
  
