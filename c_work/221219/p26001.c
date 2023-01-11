#include <stdio.h>



int main()
{
    int arr[5];
    int sum,i,min,max;
    printf("정수 5개를 호출하시요:");
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    
    
    printf("정수들의 합:%d\n",sum);
    printf("정수들의 최댓값:%d\n",max);
    printf("정수들의 최솟값:%d\n",min);
    

    return 0;
}