#include<stdio.h>
#include<stdio.h>
int main()
{
int n,sum=0,s;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
        {
            s=n%10;
            sum=sum+s;
            n=n/10;
        }
        printf("sum :%d",sum);
        return 0;
        }
