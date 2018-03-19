#include <stdio.h>
#include <string.h>

int main()
{
   char a[100];
   printf("Enter a string to reverse\n");
   scanf("%s",&a);
   strrev(a);
   printf("Reverse of the string is \n%s\n", a);
   return 0;
}
