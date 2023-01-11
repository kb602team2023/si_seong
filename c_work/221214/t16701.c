#include <stdio.h>

int main()
{
    int start =0, end = 0;
    int total = 0;
    printf("시작 정수 입력:");
    scanf("%d",&start);
    printf("끝 정수 입력:");
    scanf("%d",&end);

    printf("end = %d start = %d\n",end, start);

    for(int i = start; i<end+1;i++)
    {
        total = total + i;
    }
    printf("total = %d",total);

    return 0;    
}