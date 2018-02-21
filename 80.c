#include <stdio.h>

int main()
{
    int a,d;
	printf("enter the number:\n");
	scanf("%d",&a);
	while(a!=0)
    {

        d=a%10;
        if(a%2!=0)
        {
            printf("%d",d);
        }
        a=a/10;
    }
			return 0;
		}
