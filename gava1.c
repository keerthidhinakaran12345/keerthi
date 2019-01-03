#include<stdio.h>
void main()
{
int n,flag=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n/2;i++)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
