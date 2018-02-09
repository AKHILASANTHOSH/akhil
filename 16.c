#include<stdio.h>

int main(){

    int number,i,count;
    printf("Enter max range: ");
    scanf("%d",&number);

    for(number = 1;number<=n;number++){

         count = 0;

         for(i=2;i<=number/2;i++){
             if(number%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && number!= 1)
             printf("%d ",number);
    }
  
   return 0;
}
