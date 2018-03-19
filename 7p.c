#include <stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n,i,j,temp=0;
	printf("enter the string:\n");
	scanf("%s",s);
	n=strlen(s);
	if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
	    temp=s[i];
	    s[i]=s[i+1];
	    s[i+1]=temp;
	}
	printf("%s",s);
	}
	else
	{
	for(i=0;i<n;i+=2)
	{
	    temp=s[i];
	    s[i]=s[i+1];
	    s[i+1]=temp;
	}
	printf("%s%c",s,temp);
	}
	return 0;
}
