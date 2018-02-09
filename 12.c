#include<stdio.h>
int main()
{
int num,rev=0,temp;
printf("enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
{
if(num==rev)
{
printf("the number is palindrome");
}
else
{
printf("number is not palindrome");
}
return 0;
}
}
}
