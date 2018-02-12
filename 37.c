#include<stdio.h>
void main()
{
int a,b,te;
printf("enter the a value:");
scanf("%d",&a);
printf("enter the bb value:");
scanf("%d",&b);
printf("values before swapping %d%d",a,b);
te=a;
a=b;
b=te;
printf("values after swappingb %d%d",a,b);
}
