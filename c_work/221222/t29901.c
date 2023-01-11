#include <stdio.h>

void main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=arr;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        printf("arr[%d]=%d\n",i,ptr[i]);
    }


    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        ptr[i]=ptr[i]+2;
    }

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        printf("arr[%d]=%d\n",i,ptr[i]);
    }

}

