#include<stdio.h>
void main()
{
int k,n1,m1,i,c=0;
char a[10],b[10];
printf("enter the string1:\n");
scanf("%s",a);
printf("enter the string2:\n");
scanf("%s",b);
printf("enter k value:\n");
scanf("%d",&k);
n1=strlen(a);
m1=strlen(b);
if(n1==m1)
{
for(i=0;i<n1;i++)
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
