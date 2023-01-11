#include <stdio.h>

void simplefunc(int num)
{
    num=30;
    printf("num=%d\n",num);

    return num;
}

int main()
{
    int age =20;
    simplefunc(age);
    printf("age = %d\n",age);

    return 0;
}