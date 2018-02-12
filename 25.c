#include<stdio.h>
#include<conio.h>
void main()
{
unsigned char c;
c=32;
while(c<=127)
{
printf("%c[%3d]",c,c);
c++;
}
printf("/n");
getch();
}
