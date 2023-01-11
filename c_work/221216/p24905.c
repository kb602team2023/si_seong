#include <stdio.h>

int main()
{
    int c_nt,n,a;

    printf("정수 입력");
    scanf("%d",&n);

    for(a=1;a<n;a++)
    {
        // printf("a와 n의 값:%d %d\n",a,n);
        if(n%a==0)
        {
            c_nt++;
            printf("c_nt의 값은:%d\n",c_nt);
            printf("a와 n의 값:%d %d\n",a,n);
        }
    }
    // printf("c_nt의 숫자는:%d",c_nt);
}