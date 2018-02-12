#include<stdio.h>
void main()
{
int n,rev;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("sorted array :",rev);
getch();
}
