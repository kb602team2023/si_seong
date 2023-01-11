/*
    p 157 
    while 문 중첩
    01
    프로그램 사용자로 부터 숫자 5개를 입력 받아 그 합을 출력하라
    단 숫자는 반드시 1이상 이어야 하고 1미만의 수가 들어오면 다시 입력 받아야 한다

    02
    *
    0 *
    0 0 *
    0 0 0 *
    0 0 0 0 *
    5행에 걸쳐 출력이 이우어져 행이 추가될때 마다 0 한개씩 추가됨 
*/

#include <stdio.h>

int main()
{
    int input = 0;
    int total = 0;
    int num = 0;
    while(num<5)
    {
        printf("정수입력\n");
        scanf("%d",&input);
        while(input <1)
        {               
            printf("정수가 1 보다 작습니다. 재 입력 하세요\n");
            scanf("%d",&input);
            
        }
        total = total + input;
        num = num + 1;
        printf("total = %d\n",total);
        printf("num = %d\n",num);
    }

    return 0;
}