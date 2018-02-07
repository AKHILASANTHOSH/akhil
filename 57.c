#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap numbers :%d%d",a,b);
return 0;
}
