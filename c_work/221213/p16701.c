#include <stdio.h>

int main()
{
    /*
    a=처음수 b=두번째수 t=합
    */
    int a =0, b=0,t=0;

    printf("처음 수는 : ");
    scanf("%d",&a);

    printf("두번째 수는 : ");
    scanf("%d",&b);

    for(t=0;a<b;a++)
    {
        // printf("a의 값:%d",a);
        t = t+a;

    }
    // printf("t의 값:%d",t);
    printf("두 수 사이의 합: %d",t+b);


    return 0;
}