#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i;
printf("enter the number:\n");
for(i=0;i<=10;i++)
scanf("%d",&a[i]);
if((a[i]>='a'&&a[i]<='z')&&(a[i]>='0'&&a[i]<='9'))
{
	printf("YES");
}
else
{
	printf("NO");
}
return 0;
}
