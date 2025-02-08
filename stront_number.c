
#include <stdio.h>

int main()
{
    printf("Hello, I am Jarvis!!!\n");
    printf("Check For Strong Number\n");
    int num;
    printf("\nEnter The Number: ");
    scanf("%d",&num);
    int y = num;
    int sum=0;
    int ones;
    int factorial=1;
    
    while (num!=0){
        factorial = 1;
        ones=num%10;
            for(int i=1; i<=ones; i++){
                factorial= factorial*i;
        }
        sum += factorial;
        num=num/10;
    }
    
    if (sum == y){
        printf("True\n%d is a Strong Number",y);
    }
    else{
        printf("False\n%d is not a strong number",y);
    }
}