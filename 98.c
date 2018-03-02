#include<stdio.h>
void main()
{
int a[10],n,i;
printf("enter the number:\n");
scanf("%d",&n);
printf("enter elements of N:\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(a[i]!=i)
{
printf("%d",i);
}
}
}
