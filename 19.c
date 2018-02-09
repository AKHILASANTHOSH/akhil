#include<stdio.h>
#include<conio.h>
void main()
{
int fact,i,num;
clrscr();
printf("enter the number");
scanf("%d",&num);
for(i=0;i<=num;i++)
fact=fact*i;
printf("the fact %d",fact);
getch();
}
