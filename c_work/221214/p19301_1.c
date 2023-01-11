#include <stdio.h>

int main()
{
    int num,dan,result;

    while(1)
    {
        num++;
        if(num%2==0)
        {
            dan =1;
            
            while(dan<=num)
            {
                printf("짝수 구구단 %d x %d = %d\n",num,dan,num*dan);
                dan++;
                continue;
            }
            
            
            printf("\n");
        if(num>7)
        {
            break;
        }

        }
    }

    return 0;
}