#include <stdio.h>

int main(void) 
{
	int a,b;
	printf("enter 2 number:\n");
	scanf("%d %d",&a,&b);
	if(a==b)
	{
		printf("%d is a perfect square",a*b);
	}
	else
	{
		printf("%d is not a perfect square",a*b);
	}
	return 0;
}
