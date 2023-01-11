#include <stdio.h>

int mail()
{
    int start = 0,end =0;
    printf("두 수를 입력하세요(띄어쓰기나 엔터기사용 가능)");
    scanf("%d %d",&start,&end);

    printf("start=%d",start);
    printf("end=%d",end);

    //temp 라는 변수를 만들어서 start에 값을 넣어놓자
    if(end<start)
    {
        int temp =start;
        start=end;
        //temp 안에 있는 20을 end에 넣어라
        // swap 두 수의 위치 변경하는 방법 
        end = temp;
        /*  start*1=
        start*2=
        ...*/
    }
    for( ;start<end+1 ;start++ )
    {
        for(int i =1 ;i<10 ;i++ )
        {
            printf("%d *%d=%d\n",start,i,start*i);
        }
        printf("\n");
    }

    return 0;
}