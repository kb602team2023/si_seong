#include <stdio.h>

int main()
{
    int a,b,c;

    printf("처음 선택 하는 수:");
    scanf("%d",&a);

    printf("두번째 선택 하는 수:");
    scanf("%d",&b);

    c = (a>b) ? (a-b) : (b-a);
    printf("두 수의 차는: %d",c);

    return 0;
}