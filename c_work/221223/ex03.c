#include <stdio.h>

int calcu(int ch,int **ptr1,int **ptr2)
{
   
    // printf("나와라\n");
    printf("%d와 %d의 값\n",**ptr1,**ptr2);
    printf("%d와 %d의 값\n",ptr1,ptr2);
    if(ch=='+')
    {
        // printf("나와라2\n");
        printf("덧셈을 출력합니다 ");
        
        return **ptr1+**ptr2;
    }
    else if(ch=='-')
    {
        printf("뺄셈을 출력합니다 ");
        // printf("%d와 %d의 값",n1,n2);
        return **ptr1-**ptr2;
    }
    else if(ch=='*')
    {
        printf("곱셈을 출력합니다 ");
        // printf("%d와 %d의 값",n1,n2);
        return **ptr1*(**ptr2);
    }
    else if(ch=='/')
    {
        if(ptr2!=0)
        {
            printf("나눗셈의 몫을 출력합니다 ");
            return **ptr1/ **ptr2;
        }
        else
        {
            printf("나누는 수가 0입니다");
            
        }
        
    }
    else 
    {
        if(ptr2!=0)
        {
            printf("나눗셈의 나머지를 출력합니다 ");
            return **ptr1%**ptr2;
        }
        else
        {
            printf("나누는 수가 0입니다");
            
            
        }
        
    }
}

int main()
{
    int num1,num2;
    printf("처음 입력받을 정수");
    scanf("%d",&num1);
    printf("두번째 입력받을 정수");
    scanf("%d",&num2);
    int *ptr1=&num1;
    int *ptr2=&num2;
    rewind(stdin);
    printf("ptr1과 ptr2의 값:%d %d\n",*ptr1,*ptr2);
    printf("ptr1과 ptr2의 값:%d %d\n",ptr1,ptr2);
    printf("ptr1과 ptr2의 값:%d %d\n",&ptr1,&ptr2);
    char ch;
    printf("연산자를 입력해주세요");
    scanf("%c",&ch);
    int result;
    result=calcu(ch,&ptr1,&ptr2);

    printf("결과는 %d입니다.",result);

}