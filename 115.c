#include<stdio.h>
void main()
{
int n,k,i,j,a[10],t;
printf("enter n and k values:\n");
scanf("%d %d",&n,&k);
printf("enter n elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
printf("Kth smallest element:%d",a[k-1]);
}
