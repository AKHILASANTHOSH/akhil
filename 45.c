#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
sum++;
}
printf("number of digits is:%d",sum);
}
