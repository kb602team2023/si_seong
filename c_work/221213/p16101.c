#include <stdio.h>

int main()
{
    int total =0, num = 1;

    while(num!=0)
    {
        printf("정수 입력(0 to quit): ");
        scanf("%d",&num);         
        total = total + num;
    }
    printf("합: %d",total);

    return 0;
}