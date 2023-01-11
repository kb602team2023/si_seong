#include <stdio.h>

int main()
{
    int c,n,t;
    
    while(c>=5)
    {
        c = 0;
        t = 0;

        while(1)
        {
            printf("정수 선택:");
            scanf("%d",&n);
            n>=1;
            t = t + n;
        }
        c = c + 1;
        printf("정수의 합: %d",t);
    }

    return 0;
}