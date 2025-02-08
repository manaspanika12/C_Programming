#include <stdio.h>

int main()
{
    printf("Hello, I am Jarvis\n");
    int a;
    printf ("Enter a Number:");
    scanf("%d",&a);
    int sum=0;
    int ones;
    int i=1;
    while (a>0){
        ones=a%10;
        sum=sum+ones;
        a=a/10;
    }
    printf ("The Digit Sum is:%d",sum);
    
    return 0;
}