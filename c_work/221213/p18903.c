#include <stdio.h>

/*
국어 = k 수학 = m 영어 = e
*/

int main()
{
    int k,m,e,t;

    printf("국어 성적:");
    scanf("%d",&k);
    printf("수학 성적:");
    scanf("%d",&m);
    printf("영어 성적:");
    scanf("%d",&e);

    t = (k+m+e)/3;
    printf("평균: %d\n",t);
    
    
    if(t>=90)
    {
        printf("이 학생의 등급은 A입니다.");
    }

    else if(t>=80)
    {
        printf("이 학생의 등급은 B입니다.");
    }

    else if(t>=70)
    {
        printf("이 학생의 등급은 C입니다.");
    }

    else if(t>=50)
    {
        printf("이 학생의 등급은 D입니다.");
    }

    else 
    {
        printf("이 학생의 등급은 F입니다.");
    }

    return 0;
}