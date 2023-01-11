#include <stdio.h>

int main()
{
    int a;

    for(a=1;a<100;a++)
    {
        if (a%7==0||a%9==0)
        printf("100 이하의 수 중 7의 배수이면서 9의 배수인 수는: %d\n",a);
    }

    return 0;
}