#include<stdio.h>
void main()
{
int k,n,m,i,c=0;
char a[10],b[10];
printf("enter the string1:\n");
scanf("%s",a);
printf("enter the string2:\n");
scanf("%s",b);
printf("enter k value:\n");
scanf("%d",&k);
n=strlen(a);
m=strlen(b);
if(n==m)
{
for(i=0;i<n;i++)
{
if(a[i]!=b[i])
{
c++;
}
}
if(c==k)
{
printf("YES");
}
else
{
    printf("No");
}
}
else
{
    printf("no");
}
}
