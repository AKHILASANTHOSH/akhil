#include<stdio.h>
void main()
{
char a[10],b[10],i,n1,n2;
printf("enter the string1:\n");
scanf("%s",a);
printf("enter the string2:\n");
scanf("%s",b);
n1=strlen(a);
n2=strlen(b);
for(i=0;i<n1&&n2;i++)
{
if(a[i]==b[i])
{
printf("YES");
break;
}
else
{
printf("NO");
break;
}
}
}
