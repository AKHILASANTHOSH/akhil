#include<stdio.h>
void main()
{
int num,i,a[i],sum=0,avg;
printf("enter number:");
scanf("%d",&num);
printf("enter numbers one by one:");
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=num;i++)
{
sum=sum+a[i];
}
avg=sum/num;
printf("average:%d",avg);
}
