#include<stdio.h>

int arr[5][5];
int main()
{
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("i와 j의 값:i=%d j=%d\n",i,j);
            printf("arr[%d][%d]",i,j);
            scanf("%d",arr[i][j]);
        }
    }
}