#include <stdio.h>

int main()
{
    int total = 0;
    int i, num;
    printf("0부터 num까지의 덧셈, num의 값은?");
    scanf("%d",&num);
    for(i=0;i<num+1;i=i+1)
    {
        total = total +i;
    }
    printf("total=%d",total);
    
    return 0;
 }