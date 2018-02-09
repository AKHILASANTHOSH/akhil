#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf('enter three numbers");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
{
printf("x is greater");
}
else if(y>z)
{
printf("y is greater");
}
else
{
printf("z is greater");
}
getch();
}
