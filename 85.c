#include<stdio.h>
void main()
{
char a[10];
int i,n;
printf("enter the string:");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{

if(i%2==0)
{
printf("\n %c",a[i]);

}
}
for(i=0;i<n;i++)
{

if(i%2!=0)
{
printf("\n%c",a[i]);
}
}
}
