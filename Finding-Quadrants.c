#include <stdio.h>

int main()
{
    printf("Hii ! I am Jarvis\n");
    int x,y;
    
    printf("Enter The x & y coordinates\n");
    if(scanf("%d %d", &x, &y)!=2)
    {
       printf("Invalid Input!!");
       return 0;
        
    }
    
    if(x==0){
        if(y>0){
             printf("Positive y-axis");
        }
        else if(y<0){
            printf("Negative y-axis");
        }
        else{
            printf("Origin");
        }
    }
    else if(y==0)
    {
        if(x>0){
             printf("Positive x-axis");
        }
        else{
            printf("Negative x-axis");}
    }
    else if ((x*y)<0){
        if(x<0){
            printf("II Quadrant");
        }
        else{
            printf("IV Quadrant");
        }
    }
    else{
        if(x>0){
            printf("I Quadrant");
        }
        else{
            printf("III Quadrant");
        }
    }
    
    return 0;
}
