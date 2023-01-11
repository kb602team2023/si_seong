#include<stdio.h>

int main()
{
    int arr[3][9]={{2,4,6,8,10,12,14,16,18},{3,6,9,12,15,18,21,24,27},{4,8,12,16,20,24,28,32,36}};
    int i,j;
    
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        for(j=0;j<9;j++)
        {
            printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}