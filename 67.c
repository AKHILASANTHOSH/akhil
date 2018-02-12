#include<stdio.h>
int main()
{
int a;
printf("enter the value:\n");
scanf("%d",&a);
while(a%10!=0)
{
a=a+1;
}
printf("%d",a);
return 0;
}
