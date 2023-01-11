#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];

    printf("arr의 값:%d %d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    // ptr[0]=ptr[0]+2;
    // ptr[1]=ptr[1]+2;
    // ptr[2]=ptr[2]+2;
    // ptr[3]=ptr[3]+2;
    // ptr[4]=ptr[4]+2;

    for(int i=0;i<5;i++)
    {
        ptr[i]=ptr[i]+2;
    }
    printf("arr의 값:%d %d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);

}