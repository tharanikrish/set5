#include<stdio.h>
int main()
{
int n,a[n],i,sum=0,avg;
printf("\nenter the number");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("\naverage integer:%d",avg);
return 0;
}
