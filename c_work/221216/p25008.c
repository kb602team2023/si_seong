#include <stdio.h>

int main()
{
    int a,n,t;

    printf("n의 값 입력:");
    scanf("%d",&n);
    
    for(a=0;a<n;a++)
    {
        t=t*2;
    }
   printf("2의 제곱값:%d\n",t);

   return 0;
}