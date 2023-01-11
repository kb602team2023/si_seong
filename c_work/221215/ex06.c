#include <stdio.h>

int main()
{
    int num1 = 100, num2 =100;
    int *pnum;

    pnum = &num1;
    (*pnum)+=30;
    printf("&num1 = %d\n",&num1);
    printf("pnum = %d\n",pnum);
    printf("num1 = %d\n",num1);

    pnum=&num2;
    (*pnum)-=30;
    printf("&num2 = %d\n",&num2);
    printf("pnum = %d\n",pnum);
    printf("num2 = %d\n",num2);

    return 0;
}