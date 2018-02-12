#include<stdio.h>
int main()
{
int m,n,mMultiple;
printf("enter the numbers:");
scanf("%d%d",&m,&n);
mMultiple=(m>n)?m:n;
while(1)
{
if(minMultiple%m==0 && minMultiple%n==0)
{
printf("lcm of %d and %d is %d",m,n,mMultiple);
break;
}
++mMultiple;
}
return 0;
}

