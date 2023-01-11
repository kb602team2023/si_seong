#include <stdio.h>
/*
int main()
{
    // 1. 입력값 받기
    int n;
    printf("정수 선택:");
    scanf("%d",&n);
    // 2. 이중 반복문 설계
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/
int main()
{
    int socre[5];
    int max,min;
    for(int i=0;i<5;i++)
    {
        
        printf("점수 입력:");
        scanf("%d",&socre[i]);
        
    }
    max=socre[0],min=socre[0];
   for(int i=0;i<5;i++)
   {
    
        if(max<socre[i])
        {
            max=socre[i];    
        }
        if(min>socre[i])
        {
            min=socre[i];
        }
   }
   printf("max=%d\n",max);
   printf("min=%d\n",min);
    
    return 0;
}
