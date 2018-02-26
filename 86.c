#include<stdio.h>
void main()
{
char a[10];
int i,j,n,c=0;
printf("enter the string :\n");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c=1;
break;
}
}
}
if(c==0)
{
printf("YES");
}
else
{
printf("NO");
}
}
