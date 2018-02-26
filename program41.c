#include<stdio.h>
int main()
{
char s;
int k,i;
printf("\nEnter the number:");
scanf("%d",&k);
printf("\nEnter a string:");
scanf("%s",&s);
for(i=0;i<k;i++)
{
printf("\n%s",s);
}
return 0;
}
