#include <stdio.h>
#include<string.h>
int main()
{
	char s[100];
    int n,i;
    printf("enter the string:\n");
    scanf("%[^\t\n]s",s);
    n=strlen(s);
    s[0]=s[0]-32;
    for(i=0;i<n;i++)
    {
      if(s[i]==' ')
      {
          s[i+1]=s[i+1]-32;
      }
    }
    printf("%s",s);

	return 0;
}
