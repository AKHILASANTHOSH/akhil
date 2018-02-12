#include<stdio.h>
int main()
{
int size,a[10],i,max;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the %d array elements:");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<=size;i++)
if(a[i]>max)
{
printf("the max element is :",max);
}
return 0;
}
