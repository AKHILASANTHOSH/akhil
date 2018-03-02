#include<stdio.h>
void main()
{
int l,b,h,v,ta;
printf("enter length,breadth,height of cuboid:\n");
scanf("%d %d %d",&l,&b,&h);
v=l*b*h;
printf("volume:%d \n",v);
ta=(2*l*b)+(2*b*h)+(2*h*l);
printf("total surface area:%d \n",ta);
}
