#include <stdio.h>
int main()
{
	int n,k,i,n1[10];
	printf("enter Nth value:\n");
	scanf("%d",&n);
	printf("enter Kth value:\n");
	scanf("%d",&k);
	printf("enter the N numbers:\n");

	for(i=0;i<n;i++)
	{
	    scanf("%d",&n1[i]);
	}

	printf(" \n Kth element is:%d",n1[k-1]);
	return 0;
}
