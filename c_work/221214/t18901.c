#include <stdio.h>

int main()
{
    int a =1;
    while(a<100)
    {
        
        if(a%7==0)
        {
            printf("%d\n",a);
            a++;
            continue;
        }

        if(a%9==0)
        {
            printf("%d\n",a);
        }
    a++;
    }

    return 0;
}