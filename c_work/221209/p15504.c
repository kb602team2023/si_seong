#include <stdio.h>

int main()
{
    int dan = 0, num = 10;
    printf("몇 단\?");
    scanf("%d", &dan);

    while (num>=2)
    {
        num--;
        printf("%d x %d = %d\n",dan,num, dan*num);
                           
    }

return 0;
}