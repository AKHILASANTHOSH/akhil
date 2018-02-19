include <stdio.h>

int main(void) 
{
int n,l,r;
printf("enter the number:\n");
scanf("%d",&n);
printf("enter the intervals:\n");
scanf("%d %d",&l,&r);
if(n>l&&n<r)
{
	printf("YES");
	
}
else
{
	printf("NO");
}
	return 0;
}
