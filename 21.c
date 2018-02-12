#include<stdio.h>
#include<conio.h>
void main()
{
int n,first=0,second=0,next,i;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
next=i;
}
else
{
next=first+second;
first=second;
second=next;
}
}
printf("sum of arithmetic is:",next);
getch();
}
