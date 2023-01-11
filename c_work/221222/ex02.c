#include <stdio.h>

void swapinptr(int **dptr1,int **dptr2)
{
    int *temp = *dptr1;
    *dptr1=*dptr2;
    *dptr2=temp;
}

int main()
{
    int num1=10,num2=20;
    int *ptr1,*ptr2;
    ptr1=&num1, ptr2=&num2;

    printf("ptr1=%d ptr2=%d\n",*ptr1,*ptr2);
    printf("num1=%d num2=%d\n",num1,num2);

    swapinptr(&ptr1, &ptr2);
    printf("ptr1=%d ptr2=%d\n",*ptr1,*ptr2);
    printf("num1=%d num2=%d\n",num1,num2);

    return 0;
}
