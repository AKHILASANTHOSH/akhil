#include<stdio.h>
void main()
{
int n,k,a[10],i,c;
printf("enter N and K value:\n");
scanf("%d %d",&n,&k);
printf("enter n numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("YES");
c=1;
}
}
if(c!=1)
    {
    printf("No");

}
}

