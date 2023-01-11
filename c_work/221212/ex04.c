#include <stdio.h>

int main()
{
    int num, abs;

    printf("정수 선택");
    scanf("%d",&num);

    abs = num>0 ? num : (num)*-1;
    printf("절댓값 : %d",abs);

    return 0;
}