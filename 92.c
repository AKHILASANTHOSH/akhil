#include <stdio.h>

int main(void)
{
	int n1[10],n;
	int i,sum=0;;
	printf("enter the number of elements: \n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&n1[i]);

	}
	for(i=0;i<n;i++)
	{
		sum=sum+n1[i];
	}
	printf("Sum:%d",sum);
	return 0;
}
