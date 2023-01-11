#include <stdio.h>

int main()
{
    int num1=10;
    int num2=20;
    int temp;
    int *ptr1=&num1;
    int *ptr2=&num2;
    printf("num1 num2:%d %d\n",num1,num2);
    printf("num1주소 num2주소%d %d\n",&num1,&num2);
    printf("ptr1주소 ptr2주소:%d %d\n\n",ptr1,ptr2);
    *ptr1=num1+10;
    *ptr2=num2-10;
    printf("num1 num2:%d %d\n",num1,num2);
    printf("ptr1 ptr2:%d %d\n",*ptr1,*ptr2);
    printf("num1주소 num2주소%d %d\n",&num1,&num2);
    printf("ptr1주소 ptr2주소:%d %d\n",ptr1,ptr2);
    ptr1=&num2;
    ptr2=&num1;
    printf("\n");
    printf("ptr1 ptr2:%d %d\n",*ptr1,*ptr2);
    printf("ptr1주소 ptr2주소:%d %d\n",ptr1,ptr2);
    printf("num1주소 num2주소%d %d\n",&num1,&num2);


    return 0;
}