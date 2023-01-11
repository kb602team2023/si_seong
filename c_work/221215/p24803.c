#include <stdio.h>

int main()
{
    int num1,num2,gcd,b,a,num,c;
    

    printf("처음 수");
    scanf("%d",&num1);
    printf("두번째 수");
    scanf("%d",&num2);
    printf("\n");
    a=1;
    b=1;
    num = num1>num2 ? num1:num2;
    int gcm = 0;
    while(a<=num)
    {
        
        // printf("a의 값: %d\n",a);
        if(num1%a==0&&num2%a==0)
        {
            gcm = a;
            // printf("num1을 a로 나눈 나머지가 0일 때 a의 값: %d",a);
            // printf("두번째 a의 값: %d\n",a);
            // printf("최대 공약수%d\n",a);
            
        }
        // printf("두번째 줄 최대 공약수%d\n",a);
        
        a++;     
    }
    // printf("세번째 줄 최대 공약수%d\n",a);
    printf("최대 공약수%d\n",gcm);

    return 0;
}