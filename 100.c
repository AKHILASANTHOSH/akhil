#include <stdio.h>

int main(void)
{
	int n1[10],n;
	int i,mul=1;;
	printf("enter the number of elements: \n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&n1[i]);

	}
	for(i=0;i<n;i++)
	{
		mul=mul*n1[i];
	}
	printf("mul:%d",mul);
	return 0;
}
