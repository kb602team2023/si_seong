#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};

    printf("sizeof = %d\n",sizeof(arr));
    int len =sizeof(arr)/sizeof(int);
    printf("len = %d\n",len);
    
    for(int i = 0;i<len;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}