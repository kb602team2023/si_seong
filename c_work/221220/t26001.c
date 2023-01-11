#include <stdio.h>

int main()
{
    int arr[5];
    int max,min,total=0;
    for(int i=0;i<5;i++)
    {
        printf("정수 입력");
        scanf("%d",&arr[i]);
        total=total+arr[i];
    }
    // printf("\n");
    // for(int i=0;i<5;i++)
    // {
    //     printf("arr[i]=%d\n",i,arr[i]);
    // }
    //max 구하는 비교 시작
    max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    //min 구하는 비교 시작
    min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        {
            min =arr[i];
        }
    }
    printf("\n");
    printf("total=%d\n",total);
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
}