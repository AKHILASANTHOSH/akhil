#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,num,sum=0;
printf("enter the count");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
printf("enter the number:");
scanf("%d",&num);
sum=sum+num;
printf("sum is:",sum);
}
getch();
}
