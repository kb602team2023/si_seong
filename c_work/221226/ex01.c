#include    <stdio.h>

int main()
{
    int num=10;
    int *ptr1=&num;
    int **dptr1=&ptr1;

    printf("==========num의 값==========\n");
    printf("num의 값:%d\n",num);
    printf("num의 값:%d\n",*ptr1);
    printf("num의 값:%d\n",**dptr1);
    
    printf("==========num의 주소값==========\n");
    printf("num의 주소값:%d\n",ptr1);
    printf("num의 주소값:%d\n",*dptr1);
    
    printf("==========ptr1의 주소값==========\n");
    printf("ptr1의 주소값:%d\n",&ptr1);
    printf("ptr1의 주소값:%d\n",dptr1);

    num = 20;

    printf("==========num의 값==========\n");
    printf("num의 값:%d\n",num);
    printf("num의 값:%d\n",*ptr1);
    printf("num의 값:%d\n",**dptr1);

    printf("==========num의 주소값==========\n");
    printf("num의 주소값:%d\n",ptr1);
    printf("num의 주소값:%d\n",*dptr1);
    
    printf("==========ptr1의 주소값==========\n");
    printf("ptr1의 주소값:%d\n",&ptr1);
    printf("ptr1의 주소값:%d\n",dptr1);

    return 0;
}