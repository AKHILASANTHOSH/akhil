#include<stdio.h>
void main()
{
int num,c=o,i;
printf("enter the num");
scanf("%d",num);
for(i=0i<num;i++)
{
if(num%i==0)
{
c++;
}
if(c==2)
{
printf("the number is prime");
}
else
{
printf("the number is not prime");
}
}
}
