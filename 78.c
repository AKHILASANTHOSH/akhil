#include <stdio.h>
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	if(a%13==0)
	{
		printf("%d is a multiple of 13",a);
	}
	else
	{
		printf("%d is not a multiple of 13",a);
	}
  return 0;
}
