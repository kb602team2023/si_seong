#include <stdio.h>

int value(int *ptr)
{
    
    if(*ptr%2==0)
    {
        printf("짝수출력:");
        printf("%d",*ptr);
    }
    else
    {
        value1;
    }
        
}
int value1(int *ptr)
{
    if(*ptr%2==1)
    {
        printf("홀수출력:");
        printf("%d",*ptr);
    }
}


int main()
{
    int arr[10];
    int i=0,a=0,b=0;
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        
        printf("정수 입력:");
        scanf("%d",&arr[i]);
        // printf("arr[%d]=%d\n",i,arr[i]);
        // printf("%d",a);
        // a=(arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
        // value(&arr[i]);
        a=arr[i];    
        b=a;
    }   

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        // printf("%d ",arr[i]);
        int *ptr=&arr[i];
        value(ptr);
        value1(ptr);
    }
   
    
    // value(ptr);
    // printf("%d",value(*ptr));
   
    
    return 0;
}