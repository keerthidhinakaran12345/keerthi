using System; 
using System.Collections.Generic; 
class GFG 
{ 
    static void sortit(int[]arr,intn) 
    { 
        for (int i=0;i<n;i++)  
        {
          arr[i]=i+1; 
        } 
    } 
    public static void Main() 
    { 
        int[]arr={10,7,9,2,8,3,5,4,6,1}; 
        int n=arr.Length; 
        sortit(arr,n);
        for (int i=0;i<n;i++)  
            Console.Write(arr[i]+" ");  
    } 
} 
