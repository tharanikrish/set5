#include<stdio.h>
int main()
{
int n,a[n],i,max,min;
printf("\nenter the number");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(max>a[i])
{
break;
}
else
max=a[i];
}
printf("\nmaximum number is:%d",max);
for(i=0;i,n;i++)
{
if(a[i]>min)
{
break;
}
else
min=a[i];
}
printf("\nminimum element is:%d",min);
return 0;
}
