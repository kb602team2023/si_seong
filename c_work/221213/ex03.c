#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

void showaddresult(int num)
{
    printf("덧셈결과 : %d",num);
}

int readnum(void)
{
    int num;
    scanf("%d",&num);
    
    return num;
}

void howtousethisprog(void)
{
    printf("두 개의 정수를 입력하시면 정수의 합이 출력 됩니다\n");
    printf("자 그럼 두 개의 정수를 입력하세요");
}

int main()
{
    int result, a, b;
    howtousethisprog();
    a=readnum();
    b=readnum();
    result=add(a,b);
    showaddresult(result);

    return 0;
}