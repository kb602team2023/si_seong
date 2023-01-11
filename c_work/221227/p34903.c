#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,sum;
    int arr[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("arr[%d][%d]입력받기",i,j);
            scanf("%d",arr[i][j]);
            printf("i=%d j=%d\n",i,j);
        }
        // printf("%d",arr[i][j]);
        // printf("\n");
    }

    return 0;
}