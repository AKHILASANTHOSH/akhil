#include<stdio.h>
void main()
{
int hr,m,tm;
printf("enter the hours:");
scanf("%d",&hr);
printf("enter the minutes:");
scanf("%d",&m);
tm=(hr*60)+m;
printf("total time in minutes is:",tm);
}
