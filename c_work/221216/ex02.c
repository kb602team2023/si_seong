#include <stdio.h>
/*
arr1[0] = *arr1
*/
int main()
{
    int arr1[3] ={10,20,30};
    double arr2[3]={1.1,2.2,3.3};

    printf("%d\t %f\n",arr1[0],arr2[0]);
    printf("%d\t %f\n",*arr1,*arr2);

    arr1[0]+=100;
    arr2[0]+=120.5;

    printf("arr1[0] = %d \t arr2[0] = %f\n",arr1[0],arr2[0]);
    printf("*arr1 = %d \t *arr2 = %f\n",*arr1,*arr2); 


    return 0;
}