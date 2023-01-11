#include <stdio.h>

void fibo(int num)
{
    int f1=0,f2=1,f3,i;
    if(num==1)
    {
        printf("%d",f1);
    }
    else
    {
        printf("%d %d ",f1,f2);
    }
    for(i=0;i<num-2;i++)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}
int main()
{
    int n;
    printf("출력할 피보나치수열 갯수:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("1보다 작은 수를 입력하였습니다.\n");

        return -1;
    }
    fibo(n);

    return 0;
}   
