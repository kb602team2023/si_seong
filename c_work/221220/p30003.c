#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    int sum,a;

    // printf("ptr값:%d\n\n",*ptr);
    for(int i=0;i<5;i++)
    {
        // printf("값:%d\n",*ptr); 
        sum=sum+*ptr;
        // printf("sum의 값:%d\n",sum);
        ptr--;
    }
    printf("정수의 합:%d\n",sum);    

    return 0;
}