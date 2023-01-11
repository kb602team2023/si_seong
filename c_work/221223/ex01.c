#include <stdio.h>
//2개의 정수를 입력받고 합을 출력
/*
반환형 함수(매게변수타입 매개변수명,...)
{
    명령문들...
}

*/
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int div1(int a,int b)
{
    return a/b;
}
int div2(int a,int b)
{
    return a%b;
}
int main()
{
    int a,b,sum;
    printf("첫번째 받는 수");
    scanf("%d",&a);
    printf("두번째 받는 수");
    scanf("%d",&b);

    printf("두 값의 합:%d\n",a+b);
    sum=a+b;
    printf("두 수의 합의 값:%d\n",sum);
    printf("두 값의 합은:%d\n",add(a,b));
}