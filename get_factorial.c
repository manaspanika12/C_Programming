#include <stdio.h>

int main()
{
    printf("Hello, I am Jarvis!!!\n");
    int num;
    printf("\nEnter The Number: ");
    scanf("%d",&num);
    int a=1;
    int factorial=1;
    if(num>0)
        {
                while (a<num){
                factorial= factorial*(a+1);
                a=a+1;
            }
    printf("%d! is %d\n",num,factorial);
    printf("\nTHANK YOU!");
    return 0;
        }    
    
    else{
        printf("Invalid Input");
        
    }
    return 0;
}