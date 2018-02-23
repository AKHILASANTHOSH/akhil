#include <stdio.h>

int main(void) {
	int n1[10],n2[10],n3[10];
	int n,i,j;
	printf("enter the row of ninja warriors \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&n1[i],&n2[i]);
		n3[i]=n2[i]-n1[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",n3[i]);
	}
	return 0;
}
