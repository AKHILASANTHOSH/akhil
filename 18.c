#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, temp1, temp2, remainder, num = 0, result = 0;

    printf("Enter two intervals: ");
    scanf("%d %d", &a, &b);
    printf("Armstrong numbers between %d an %d are: ", a, b);

    for(i = a + 1; i < b; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }


        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

     
        if (result == i) {
            printf("%d ", i);
        }

        num = 0;
        result = 0;

    }
    return 0;
}
