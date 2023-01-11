#include <stdio.h>

int main()
{
    int start = 0;
    int total = 0;

    do
    {
        start = start + 2;
        total =total + start;
    }while(start!=100);

    printf("total = %d",total);

    return 0;    
}