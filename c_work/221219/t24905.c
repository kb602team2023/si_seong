#include <stdio.h>

int main()
{
    int i= 0;
    int cnt = 4;
    printf("2,3");
    while(i==10)
    {
        printf("%d");
        i++;
        for( ; cnt<30;cnt++)
        {
            if(cnt%2==0 || cnt%3 ==0)
            {
                printf("%d 소수가 아님\n",cnt);
            }
            else
            {
                printf("%d 소수\n",cnt);
            }
        }
        i++;
        
    }
}