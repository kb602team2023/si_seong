#include <stdio.h>

int main()
{
    int n,c,a,b;
    int t = 0;
    while(c<6)
    {
        c = c + 1;
        while(n<5)
        {
            n = n + 1;
            b= a;
            printf("정수선택");
            scanf("%d\n",&a);
            t = t + a;
            b<1;
            break;
        }
        
        printf("합:%d",t);
    }
    return 0;
}
