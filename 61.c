#include<stdio.h>
int main()
{
int m,i;
char n[20];
printf("enter the word \n");
for(i=0;i<10;i++)
scanf("%c",n[i]);
printf("enter the number of letters to be printed");
scanf("%d",&m);
for(i=0;i<m;i++)
{
	printf("%c",n[i]);
}
return 0;
}
