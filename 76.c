#include <stdio.h>

int main(void)
{
	int a,i,c=0;
	printf("enter  number:\n");
	scanf("%d ",&a);
	for(i=0;i<a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is a prime number",a);
	
	}
	if(c!=2)
	{
		printf("%d is a composite number",a);
	}
	return 0;
}
	
