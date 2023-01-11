#include <stdio.h>

int main()
{
    printf("몇개의 정수 입력");
    int num;
    scanf("%d",&num);
    
    int cnt = num;
    int total = 0;
    int input = 0;
        while(num>0)
    {
        printf("정수입력");
        scanf("%d",&input);
        total = total + input;

    }
    printf("평균 = %.2f",total/(double)cnt);

    return 0;
}