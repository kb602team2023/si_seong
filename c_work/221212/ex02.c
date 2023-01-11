#include <stdio.h>

int main()
{
    int opt;
   double num1, num2;
   double result;

   while(1)
    {
        printf("계산 과정 선택 1. 덧셈(+) 2. 뺄셈(-) 3. 곱셉(*) 4. 나눗셈(/)\n");
        scanf(" %d",&opt);
        

        // printf("숫자 선택");
        // scanf("%lf  %lf",&num1,&num2);
        printf("처음 숫자 선택");
        scanf("%lf", &num1);

        printf("두번째 숫자 선택");
        scanf("%lf", &num2);
    
        if(opt==1)
        {
            result = num1 + num2;
        }
        if (opt==2)
        {
            result = num1 - num2;
        }
        if(opt==3)
        {
            result = num1 * num2;
        }
        if(opt==4)
        {
            result = num1 / num2;
        }
        printf("결과 : %f",result);
        printf("\n");
    }
   

    return 0;
}