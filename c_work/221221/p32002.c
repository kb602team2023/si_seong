#include <stdio.h>

void swap(int *ptr1,int *ptr2,int *ptr3)
{
    int temp=*ptr1;
   *ptr1=*ptr3;
   *ptr3=*ptr2;
   *ptr2=temp;

}

int main()
{
    int num1,num2,num3;
    
    printf("처음 정수 선택:");
    scanf("%d",&num1);
    printf("두번째 정수 선택:");
    scanf("%d",&num2);
    printf("세번째 정수 선택:");
    scanf("%d",&num3);
    
    printf("num1 num2 num3:%d %d %d\n",num1,num2,num3);

    swap(&num1,&num2,&num3);
    printf("num1 num2 num3:%d %d %d\n",num1,num2,num3);

    return 0;
}