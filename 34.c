#include<stdio.h>
#include<conio.h>
void main()
{
   char sr[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(sr);
   for(i = 0; sr[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(i = 0; i <= l-1; i++)
   {
      if(sr[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
}
