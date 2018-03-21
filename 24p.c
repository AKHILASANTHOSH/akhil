#include<stdio.h>
#include<string.h>
void main()
{
char s[10],i,n,count=0;
printf("enter the string:");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
printf("Yes");
count=count+1;
}
}
if(count==0)
{
printf("No");
}}
