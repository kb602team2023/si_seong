#include <stdio.h>

int main()
{
    int a,b,c;
    printf("정수 선택 하기");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        c = c*b;
        
        // printf("a의 값%d\n",a);
        // printf("b의 값%d\n",b);
        // printf("c의 값%d\n",c);
        // printf("\n");
    }
    
    printf("정수 %d의 계승값은 : %d",a,c);

    return 0;
}