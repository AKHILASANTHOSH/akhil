#include <stdio.h>

int main()
{
	int a,i;
	scanf("%d",&a);
	if(a==0)
	{
		printf("invalid input ");
		
	}
	else if(a==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		for(i=2;i<=a;i++)
		{
			if(a%i==0 & a!=i)
			{
				printf("not prime number");
				break;
				
			}
			 if(a%i==0 & a==i)
			 {
			 	printf("prime number");
			 }
			
			
		}
		
	
	}
	return 0;
}
