#include <stdio.h>

int main()
{
    int a,b;

    printf("처음 선택 하는 수:");
    scanf("%d",&a);

    printf("두번째 선택 하는 수:");
    scanf("%d",&b);

    if(a>b)
        printf("두 수의 차:%d",a-b);
    
    else if (b>a)
        printf("두 수의 차:%d",b-a);

    return 0;
}