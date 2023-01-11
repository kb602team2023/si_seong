#include    <stdio.h>

int main()
{
    int arr[3][3];
    printf("arr[0]=%d\n",arr);
    printf("arr[0]=%d\n",arr[0]);
    printf("arr[0]=%d\n",&arr[0][0]);
    printf("\n");
    printf("arr[1]=%d\n",arr[1]);
    printf("arr[1]=%d\n",&arr[1][0]);
    printf("\n");
    printf("arr[2]=%d\n",arr[2]);
    printf("arr[2]=%d\n",&arr[2][0]);
    printf("\n");
    printf("sizeof(arr)=%d\n",sizeof(arr));
    printf("sizeof(arr[0])=%d\n",sizeof(arr[0]));
    printf("sizeof(arr[1])=%d\n",sizeof(arr[1]));
    printf("sizeof(arr[2])=%d\n",sizeof(arr[2]));


    return 0;
}