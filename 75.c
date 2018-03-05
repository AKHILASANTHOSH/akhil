#include<stdio.h>
int main()
{
char s[10];
int n;
printf("enter the string:\n");
scanf("%s",s);
n=strlen(s);
if(n%2==0)
{
s[(n/2)-1]='*';
  str[n/2]='*';
printf("%s",s);
}
else
{
s[(n/2)]='*';
printf("%s",s);
}
return 0;
}
