#include <stdio.h>

int main()
{
    int a, b, n, t, t1, s;
    while(n<=5)
    {
        a=0;
        b=1;
        t= a+b;
        printf("a처음t의 값%d\n",t);
        printf("처음t1의 값%d\n\n",t1);
        t1=t;
        s=s+t1;
        printf("두번째 t의 값%d\n",t);
        printf("두번째 t1의 값%d\n",t1);
        printf("s의 값%d\n\n",s);
        n++;
        printf("n의 값%d\n\n",n);
    }
}