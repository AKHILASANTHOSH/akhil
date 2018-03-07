#include <stdio.h>
int main()
{
	int n,a,d,i,sum;

	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&n);
    sum=(2*a+(n-1)*d);
    printf("Sum:%d",sum);

	return 0;
}
