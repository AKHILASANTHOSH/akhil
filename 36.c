#include<stdio.h>
int main()
{
    char string[80];
    int count, nc = 0, sum = 0;
    printf("Enter the string \n");
    scanf("%s", string);
    for (count = 0; string[count] != '\0'; count++)
    {
        if ((string[count] >= '0') && (string[count] <= '9'))
        {
            nc =nc+1;
            sum =sum+ (string[count] - '0');
        }
    }
    printf("NO. of special characters in the string = %d\n", nc);
    printf("Sum of all digits = %d\n", sum);
return 0;
}
