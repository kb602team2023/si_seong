#include <stdio.h>

int main()
{
    int a,b,is;
    printf("처음 수");
    scanf("%d",&a);
    printf("두번째 수");
    scanf("%d",&b);
    printf("\n");

    if(a>=b)
    {
        while(a>=b)
        {
            
             is=1;
            while(is<10)
            {
                printf("%d단의 구구단:%d\n",b,b*is);
                is++;
                
                continue;
            }
            printf("\n");
            b++;
        }
    }
    else
    {
        while(b>=a)
        {
            
            is=1;
            while(is<10)
            {
                printf("%d단의 구구단:%d\n",a,a*is);
                is++;
                
                continue;
            }
            printf("\n");
            a++;
        }
    }

    return 0;
}