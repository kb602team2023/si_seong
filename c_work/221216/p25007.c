#include <stdio.h>

int main()
{
    int a,k,n,t,c;
    printf("상수 n의 값 입력:");
    scanf("%d",&n);

    for(a=1;a<n;a++)
    {
        t=t*2;
        
        if(t<=n)
        {
            // printf("t의 값:%d\n",t);
            continue;
        }
        else
        {
            break;
        }
    }
    printf("k의 값:%d",a-1);

    return 0;
}