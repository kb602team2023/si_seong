#include<stdio.h>

int main()
{
    int n1,n2;
    int arr[31]={ 0 };
    for(int i=1;i<30;i++)
    {
        // printf("처음 arr[%d]의 값:%d\n",n1,arr[n1]);
        int j;
        printf("학생 번호 입력:");
        scanf("%d",&n1);
        arr[n1]++;
        // printf("arr[%d]의 값:%d\n",n1,arr[n1]);
        // printf("i의 값:%d",i);
        printf("i의 값:%d\n",i);
        
    }
    for(int i=0;i<29;i++)
    {
        // printf("i의 값:%d:",i);
        if(arr[n1]==0)
        {
            printf("미 제출 학생입니다.%d\n:",i);
        }
        else
        {
            printf("제출 학생입니다.\n");
        }
        continue;
    }    
}

