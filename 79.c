#include <stdio.h>

int main(void) 
{
	int a,b,c,i,r,count=0;
	printf("enter 2 number:\n");
	scanf("%d %d",&a,&b);
	c=a*b; 
	printf("product is:",c);
	
for(i=1;i<=c/2;i++)
{
	r=i*i;
	if(r==c)
	{
		printf("%d is a perfect square",r);
		count=1;
	}
}
	if(count==0)
	{
		printf("%d is not a perfect square",a*b);
	}
	return 0;
}
