#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='A'&&c>='Z')||(c>='a'&&c>='z'))
{
printf("the character is a alphabet");
}
else
{
printf("character is not a alphabet");
}
getch();
}
