#include <stdio.h>

int main()
{
    int num;
    printf("숫자 입력\n");
    scanf("%d",&num);

    if(num > 30)
    {
        printf("%d 는 30보다 크다\n",num);
    }

    if(num > 20)
    {
        printf("%d 는 20보다 크다\n",num);
    }
    
    if(num > 10)
    {
        printf("%d 는 10보다 크다\n",num);
    }
    if(num > 0)
    {
        printf("%d 는 0보다 크다\n",num);
    }

    return 0;
}