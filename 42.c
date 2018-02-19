#include<stdio.h>
#include<string.h>
int main()
{
int c1,c2;
char a[20]="hello",b[30]="world";
c1=strlen(a);
c2=strlen(b);
if(c1>c2)
{
printf(" string 1 is greater %s",a);
}
else if(c1<c2)
{
printf(" string 2 is greater %s",b);

}
else
{
printf(" two string are of same length %s%s",a,b);
}
rteurn 0;
}
