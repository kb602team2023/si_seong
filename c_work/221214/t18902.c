#include <stdio.h>

int main()
{
    int num1,num2;

    printf("첫번째 수 입력:");
    scanf("%d",&num1);

    printf("두번째 수 입력:");
    scanf("%d",&num2);

    int result = num1>num2? num1-num2:num2-num1;
    printf("result = %d",result);

    return 0;
}