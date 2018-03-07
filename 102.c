#include<stdio.h>
void main()
{
int n,c;
printf("enter the number :\n");
scanf("%d",&n);
if(n%2==0)
{
c=n/2;
printf("%d",c);
}
else
{
    printf("%d",n);
}
}
