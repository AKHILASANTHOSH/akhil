include<stdio.h>
#include<conio.h>
void main()
{
int c;
printf("enter the character");
scanf("%c",c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("vowels");
}
else
{
printf("constants");
}
getch();
}
