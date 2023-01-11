#include <stdio.h>

int main()
{
    /*반복횟수 a 첫번째 반복의 반복 변수 b 자연수 n 나누는수 c*/
    int a,b,c,n,c_nt1;
    printf("반복 횟수 입력:");
    scanf("%d",&a);

    n=2,c=2;
    for(b=1;b<=a;b++)
    {
        if(n%c==0)
        {
            printf("n과 c의 값:%d %d\n",n,c);
            
            c_nt1++;
            n++;
            printf("c_nt1의 값:%d\n",c_nt1);
            continue;
            
        }
        else
        {
            c++;
            continue;
        }
        n++;
        
    }
}