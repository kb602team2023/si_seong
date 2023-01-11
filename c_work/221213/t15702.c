#include <stdio.h>

int main()
{
    int c_cnt = 0;
    int num = 1;
    int t_cnt = 0;
    while(t_cnt<5)
    {
        while(c_cnt>0)
        {
            printf(" 0 ");
            c_cnt = c_cnt-1;
        }
        printf(" * \n");
        c_cnt = c_cnt +num;
        num = num + 1;
        t_cnt = t_cnt +1;
        // printf("c_cnt = %d\n",c_cnt);
        // printf("num = %d\n",num);
        // printf("t_cnt = %d\n",t_cnt);
    }

    return 0;
}