#include<stdio.h>
void main()
{
int a,b,t;
printf("enter the a value:");
scanf("%d",&a);
printf("enter the bb value:");
scanf("%d",&b);
printf("values before swapping %d%d",a,b);
t=a;
a=b;
b=t;
printf("values after swappingb %d%d",a,b);
}
