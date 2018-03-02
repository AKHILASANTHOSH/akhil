#include <stdio.h>

void main()
{
	int n,i,c=0;
	printf("enter  number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
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

}

