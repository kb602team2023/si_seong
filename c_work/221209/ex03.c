#include <stdio.h>

int main()
{
    int num1 = 0;
    double num2 = 12.;

    printf("num1 = %d\n",num1);
    printf("num2 = %f\n",num2);
    
    printf("정수 입력:");
    scanf("%d", &num1);
    printf("실수 입력:");
    scanf("%lf",&num2);

    printf("num1 = %d\n",num1);
    printf("num2 = %f\n",num2);

    return 0;
}