#include<stdio.h>
int main()
{
int base,exponent;
long result=1;
printf("enter a base number");
scanf("%d",&base);
printf("enter a exp number");
scanf("%d",&exp);
while(exp!=0)
{
result*=base;
--exp;
}
printf("answer=%11d",result);
return 0;
}
