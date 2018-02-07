include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;

printf("swap numbers :%d%d",a,b);
return 0;
}
