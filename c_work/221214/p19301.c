#include <stdio.h>

int main()
{
    int num =0, dan =0,result;

    while(num<7)
    {
        num++; 
        printf("첫번째 num의 값%d\n",num);  
        printf("첫번째 dan의 값:%d\n",dan);
        if(num%2==0)
        {
        printf("if 안의 num 숫자 %d\n",num);
        printf("if안에 dan값: %d\n",dan);
        dan =1;
        while(dan<=num)
        {
            
            printf("if문 안에 while문 안에 dan값:%d\n\n",dan);
            dan++;
            continue;
        }
            
            
        }
        printf("두번째 num의 값%d\n",num);  
        printf("두번째 dan의 값:%d\n\n",dan);
        
        // if(dan>num)
        // {
        //     printf("dan의 값:%d\n",dan);
        //     printf("result =%d\n",num*dan);
        //     dan++;
        //     break;
        // }
        // printf("num의 값%d\n",num);    
        // printf("dan의 값:%d\n",dan);
        // printf("result =%d\n",num*dan);
    }

    return 0;
}