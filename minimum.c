#include <stdio.h>
 int main()
{
    int array[100], minimum, size, i, location = 1;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &size);
    printf("Enter %d integers\n", size);
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    minimum=array[0];
    for(i=1;i<size;i++)
    {
      if (array[c] < minimum)
        {
          minimum = array[i];
          location = i+1;
        }
    }
   
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
