#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int l,m;
printf("\nenter two strings:);
scanf("%s%s",a,b);
l=strlen(a);
m=strlen(b);
if(l>m)
{
printf("\n%s",a);
}
else
printf("\n%s",b);
return 0;
}
