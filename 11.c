#include<stdio.h>
#include<conio.h>
void main()
{
int base ,exp;
long  result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result=result* base;
        --exp;
    }

    printf("Answer = %d", result);
}
