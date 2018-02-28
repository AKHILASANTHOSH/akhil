#include<stdio.h>
void main()
{
int n,re=0,r=0;
printf("enter the number:\n");
scanf("%d",&n);
while(n!=0)
{
re=n%10;
r=(r*10)+re;
n=n/10;
}
printf("reverse :%d",r);
}
