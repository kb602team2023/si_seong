#include <stdio.h>

int main()
{
    /*
    처음 선택 초 => a 시간 선택 => b 선택에서 3600초 나눈 나머지 c c랑 60초 나눈 몫 d 나머지 e*/
    int h,m,s,a,b,c,d,e;
    a>0;
    b>0;
    c>0;

    printf("초 선택\n");
    scanf("%d",&a);
    b=a/3600;
    c=a%3600;
    d=c/60;
    e=c%60;
    printf("시: %d 분: %d 초: %d\n",b,d,e);


    return 0;
}