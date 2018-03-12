#include<stdio.h>
void main()
{
char s[10];
printf("enter the day:\n");
scanf("%s",s);
if(s[0]=='s'||s[0]=='S')
{
printf("YES!!!!It is a holiday");
}
else
{
printf("NO!!!!It is not a holiday");
}
}
