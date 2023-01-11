#include<stdio.h>

void showarr(int (*arr)[3],int *ptr)
{
    printf("ptr=%d",ptr);
    printf("ptr=%d\n",*ptr);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int num=10;
    int *pnum=&num;
    int arr[][3]={1,2,3,4,5,6,7,8};
    showarr(arr,&num);
    
    return 0;
}