#include<stdio.h>
int main()
{
int n,pow=2,a=1;
printf("\nenter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=a*pow;
if(a==n)
{
printf("\n %d is the power of 2",n);
break;
}
}
if(a!=n)
{
printf("\n%d is not a power of 2",n);
break;
}
}
