#include <stdio.h>

int main()
{
    int arr[]= {11,22,33};

    int *ptr = arr;

    printf("주소값 ==========\n");
    printf("%d %d %d\n",ptr,ptr+1,ptr+2);
    printf("값=============\n");
    printf("%d %d %d\n",*ptr,*(ptr+1),*(ptr+2));
    printf("값=============\n");
    printf("%d %d %d\n",ptr[0],ptr[1],ptr[2]);


    return 0;    
}