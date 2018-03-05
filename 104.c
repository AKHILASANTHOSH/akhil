#include <stdio.h>
int main()
{
    int a,b,r=1,i;
    printf("enter the values:\n");
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        r=r*a;
    }
    printf("%d",r);
	return 0;
}

