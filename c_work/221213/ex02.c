#include <stdio.h>

int add(int num1, int num2)
{
    return num1 +num2;
}

int main()
{
    int result;
    result = add(3,4);
    printf("덧셈결과 : %d\n",result);
    result = add(5,8);
    printf("덧셈결과 : %d\n",result);

    return 0;
}