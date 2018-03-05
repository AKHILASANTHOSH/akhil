#include<stdio.h>
int main()
{
float p,s,r;
int t;
printf("enter the principal amount:\n");
scanf("%f",&p);
printf("enter the rate:\n");
scanf("%f",&r);
printf("enter the time:");
scanf("%d",&t);
s=(p*r*t)/100;
r=floor(s);
printf("result is:%f",r);
return 0;
}
