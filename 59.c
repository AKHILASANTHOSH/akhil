#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[20];
int m;
printf("enter numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=0;i<10;i++)
{
if(a[i]>m)
m=a[i];
}
printf("maximum number is:%d",m);
return 0;
}
