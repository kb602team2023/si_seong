#include<stdio.h>

int main()
{
    int arr1[3][2] = {{1,2},{10,12}};
    int arr2[2][2] = {{1,2},{5,9}};
    int arr3[5][2] = {{10,2,},{60,75},{60},{12,97}};

    int(*ptr)[2]=arr1;
    printf("ptr[0][0]=%d\n",ptr[0][0]);
    printf("ptr[0][1]=%d\n",ptr[0][1]);
    printf("ptr[1][0]=%d\n",ptr[1][0]);
    printf("ptr[1][1]=%d\n",ptr[1][1]);
    printf("ptr[2][0]=%d\n",ptr[2][0]);
    printf("ptr[2][1]=%d\n\n",ptr[2][1]);
    

    ptr=arr2;
    printf("ptr[0][0]=%d\n",ptr[0][0]);
    printf("ptr[0][1]=%d\n",ptr[0][1]);
    printf("ptr[1][0]=%d\n",ptr[1][0]);
    printf("ptr[1][1]=%d\n\n",ptr[1][1]);
    
    ptr=arr3;
    printf("ptr[0][0]=%d\n",ptr[0][0]);
    printf("ptr[0][1]=%d\n",ptr[0][1]);
    printf("ptr[1][0]=%d\n",ptr[1][0]);
    printf("ptr[1][1]=%d\n",ptr[1][1]);
    printf("ptr[2][0]=%d\n",ptr[2][0]);
    printf("ptr[2][1]=%d\n",ptr[2][1]);
    printf("ptr[3][0]=%d\n",ptr[3][0]);
    printf("ptr[3][1]=%d\n",ptr[3][1]);
    printf("ptr[4][0]=%d\n",ptr[4][0]);
    printf("ptr[4][1]=%d\n\n",ptr[4][1]);
    
}