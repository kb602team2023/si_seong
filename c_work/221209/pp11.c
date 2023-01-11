#include <stdio.h>

int main()
{
    int total = 0, num = 0;
    while(1)
    {  
        printf("정수 입력(0 to quit):");
        scanf("%d,",&num);
        total = total + num;
        num !=0;
    } 

    printf("합계 = %d\n", total);

    return 0;   
}