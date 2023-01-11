#include <stdio.h>

int main()
{
    int input;
    int total = 1;
    printf("구하고 싶은 팩토리얼 정수 입력");
    scanf("%d",&input);

    for( ;input >0; input = input -1)
    {
        total = total *input;
    }
    printf("total = %d",total);

    return 0;
}