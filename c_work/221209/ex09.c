#include <stdio.h>

int main()
{
    double total = 0.0;
    int num = 0;
    int input = 0.0;

    for ( ; input>=0.0; )
    {
        total = total + input;
        printf("실수 입력:");
        scanf("%lf",&input);
        num = num +1;

    }
    printf("평균 : %f \n", total/(num-1));

    return 0;    
}