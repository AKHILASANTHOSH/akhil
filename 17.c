#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,sum=0;
clrscr();
printf("enter the number");
scanf("%d",&num);
if(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
printf("armstrong number");
}
else
{
printf("not armstrong number");
}
getch();
}
