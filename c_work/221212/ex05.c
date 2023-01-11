#include <stdio.h>

int main()
{
    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            continue;
        }
        printf("i = %d\n",1);
        if(i ==7)
        {
            printf("종료됩니다");
            break;
        }
        if(i%3==0)
        {
            printf("%d = 는 3의 배수입니다.\n",1);
        }
    }
    return 0;
}