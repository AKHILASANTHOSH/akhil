#include<stdio.h>
int main()
{
int lim,n,i;
printf("enter the limit:");
scanf("%d",&lim);
printf("enter the num:");
scanf("%d",&n);
for(i=0;i<=lim;i++)
if(i%n==0)
{
printf("%d",i);
}
return 0;
}
