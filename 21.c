#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=0,s=0,t,i;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
t=i;
}
else
{
t=f+s;
f=s;
s=t;
}
}
printf("sum of arithmetic is:",t);
getch();
}
