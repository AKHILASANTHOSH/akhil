#include<stdio.h>
void main()
{
int n,k,i,c=0,a[10];
printf("enter n and k value:\n");
scanf("%d %d",&n,&k);
printf("enter n elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
c++;
}
if(c==k)
{
printf("%d odd numbber %d",k,a[i]);
break;
}
}
}
