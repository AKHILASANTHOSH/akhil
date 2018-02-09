#include<stdio.h>
int main()
{
int r1,r2,rem=0,i;
{
printf("enter the first range");
scanf("%d",&r1);
printf("enter the second range");
scanf("%d",&r2);
for(i=r1;i<=r2;++i)
{
rem=i%2;
if(rem==0)
{
printf("%d",i);
}
return 0;
}
}
}
