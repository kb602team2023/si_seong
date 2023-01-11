#include <stdio.h>

int main()
{
    int A=9 ,Z=0,sum1,sum2;

    while(1)
    {
        A--;
        Z++;
        if(A<10&&Z<10)
        {
            // printf("A와 Z의 값:%d %d\n",A,Z);
            sum1 = 10*A+Z;
            sum2 = 10*Z+A;
            printf("결과 : %d\n",sum1+sum2);
            continue;
        }
        break;
    }

    return 0;
}