#include <stdio.h>

int sbv(int num)
{
    return num*num;
}

void sbr(int *ptr1)
{
    (*ptr1)*(*ptr1);
}

int main()
{
    int num,a,b;
    printf("정수 선택:");
    scanf("%d",&num);

    a = sbv(num);
    int *ptr1=&num;
    b = sbv(*ptr1);
    printf("sbv제곱의 값:%d\n",a);
    printf("sbr제곱의 값:%d\n",b);

    return 0;
}