#include <stdio.h>

int main()
{
    int num =1, a,b = 0;
    do
    {
        // printf("num의 값 %d\n",num);
        a = num*2;
        b = b + a;
        num++;
        // printf("a의 값 %d\n",a);
        // printf("b의 값 %d\n",b);
    }while(num<=50);

    printf("100이하의 짝수 정수의 합: %d\n",b);

    return 0;
}