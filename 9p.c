#include<stdio.h>
void main()
{
int n1,n2,i;
printf("enter range:\n");
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
if(i%(n1&&n2)==0&&(i%2!=0))
{
printf("%d",i);
}
}
}
