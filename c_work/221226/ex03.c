#include<stdio.h>

int main()
{
    int arr1[3][2]={{1,0},{0},{5,2}};
    int arr2[3][3]={0};

    printf("arr1:%d\n",arr1);
    printf("arr1+1:%d\n",arr1+1);
    printf("arr1+2:%d\n",arr1+2);
    printf("arr1:%d\n",**arr1);
    printf("arr1:%d\n",**(arr1)+2);
    printf("arr1:%d\n",**(arr1+2));
    printf("\n");
    printf("arr2:%d\n",arr2);
    printf("arr2+1:%d\n",arr2+1);
    printf("arr2+2:%d\n",arr2+2);


    return 0;
}