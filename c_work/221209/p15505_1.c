#include <stdio.h>

int main()
{
    int num,a;
    int total =0;
    /*printf("입력하는 정수의 수");
    scanf("%d",&num);*/
    while(1)
    {
        printf("정수입력(0 to quit):");
        scanf("%d",&num);
        total = total + num;
        num !=0;
    }
    printf("평균 = %d",total);

    return 0;
}