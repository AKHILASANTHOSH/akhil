#include <stdio.h>
int main()
{
	int a,b,gcd,lcm,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
	  if(a%i==0 && b%i==0)        //checks if i is factor of n1 and n2
	  {
	      gcd=i;
	  }
	}
	lcm=(a*b)/gcd;
	printf("lcm of %d and %d is %d",a,b,lcm);
	return 0;
}
