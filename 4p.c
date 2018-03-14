#include<stdio.h>
#include<string.h>
void main()
{
char s[10];
printf("enter the string:\n");
scanf("%s",s);
printf("Appended string:%s",strcat(s,"."));
}
