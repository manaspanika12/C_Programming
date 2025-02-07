#include <stdio.h>

int main()
{
    printf("Hello I am Jarvis !!\n");
    
    int array[]={0,1,2,3,4,5,6,7,8,9,18,17,12,99};
    int key;
    if(scanf("%d", &key)!=1){
       printf("Invalid Input!!");
       return 0;
   }
   
  /*printf("%lu\n",sizeof(array));
   printf("%lu\n",sizeof(array[0]));*/
   
   int lenght=(sizeof(array)/sizeof(array[0]));
   printf("Length of Array = %d\n",lenght);
   
   
    int i=0;
    for (i=0;i<(sizeof(array)/sizeof(array[0]));i++)
    {
        if(array[i]==key)
        {
        printf("The index which contains %d is %d",key,i);
        return 0;
        }
        
    }
    
    printf("Value Not Exist In The ARRAY");
    return 0;
    
}

