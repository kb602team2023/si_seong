#include <stdio.h>

int sum(int n1,int n2)
{
    printf("덧셈을 출력합니다");
    return n1+n2;
}
int sub(int n1,int n2)
{
    printf("뺄셈을 출력합니다:");
    return n1-n2;
}
int mul(int n1,int n2)
{
    printf("곱셈을 출력합니다");
    return n1*n2;
}
int div1(int n1,int n2)
{
    printf("나눗셈의 몫을 출력합니다");
    return n1/n2;
}
int div2(int n1,int n2)
{
    printf("나눗셈의 나머지를 출력합니다");
    return n1%n2;
}

int main()
{
    int num1,num2;
    printf("두 개의 정수를 입력해주세요");
    scanf("%d %d",&num1,&num2);
    rewind(stdin);

    char ch;
    printf("연산자를 입력해주세요");
    scanf("%c",&ch);
    int result;
    switch(ch)
    {
        case'+':
            result=sum(num1,num2);
            break; 
        case'-':
            result=sub(num1,num2);
            break;
        case'*':
            result=mul(num1,num2);
            break;
        case'/':
            result=div1(num1,num2);
            break;
        case'%':
            result=div2(num1,num2);
                break;

    }
    printf("결과 출력:%d",result);

}