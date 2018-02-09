#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
printf("enter year:');
scanf("%d",&yr);
if(yr%4==0)
{
printf("it is the leap year");
}
else
{
printf("it is not a leap year");
}
getch();
}
