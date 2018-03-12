#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
	int n,l,i,c=0;
	printf("enter the string:\n");
	scanf("%s",a);
	printf("enter the number:\n");
	scanf("%d",&n);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    c++;
	    if(n==c)
	    {
	        break;
	    }
	}
	return 0;
}
