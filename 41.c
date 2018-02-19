#include <stdio.h>

int main(void) {
int num,i;
char s[20];
printf("enter the number of times:\n");
scanf("%d",&num);
printf("enter the sring:");
scanf("%s",s);
for(i=1;i<=num;i++)
{
	printf("%s",s);
}
	return 0;
}
