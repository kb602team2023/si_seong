#include <stdio.h>

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int a,b,c;
    int *ptr1=&arr[0];
    int *ptr2=&arr[5];
    
    // for(int i=0;i<3;i++)
    // {
    //     printf("ptr1의 값과 ptr2의 값:%d %d\n",*ptr1,*ptr2);
    //     a=*ptr1+c;
    //     b=*ptr2-c;
    //     printf("a와 b의 값:%d %d\n",a,b);
    //     ptr1++;
    //     ptr2--;
    //     c=c-2;

    // }
    // printf("arr[0]에서 arr[5]까지의 주소값:%d %d %d %d %d %d\n",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
    printf("%d",*ptr1+5);ptr1++;
    // printf("ptr1의 주소:%d\n",ptr1);
    printf("%d",*ptr1+3);ptr1++;
    // printf("ptr1의 주소:%d\n",ptr1);
    printf("%d",*ptr1+1);ptr1++;
    // printf("ptr1의 주소:%d\n",ptr1);
    ptr2-=2;printf("%d",*ptr2-1);
    // printf("ptr2의 주소:%d\n",ptr2);
    ptr2++;printf("%d",*ptr2-3);
    // printf("ptr2의 주소:%d\n",ptr2);
    ptr2++;printf("%d",*ptr2-5);
    // printf("ptr2의 주소:%d\n",ptr2);
    
    


    return 0;
}