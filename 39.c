#include<stdio.h>
void main()
{
int a[20],i,gt;
printf("enter the numbersL:");
for(i=0;i<10;i++)
{
scanf("%d",a[i]);
}
gt=a[0];
for(i=0;i<10;i++)
{
if(a[i]>gt)
{
gt=a[i];
printf("greatest number is:%d",gt);
}
}
}
