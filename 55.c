#include<stdio.h>
int main()
{
int a,b,n;
printf("enter the number:\n");
scanf("%d",&a);
printf("enter the number:\n");
scanf("%d",&b);
n=a*b;
if(n%2==0)
{
	printf("even");
	
}
else
{
	printf("odd");
}
return 0;
}
