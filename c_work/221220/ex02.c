#include <stdio.h>

void showaray(int *param,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("param[%d]=%d",i,param[i]);
        printf("\n");
    }

}
// void addaray(int *param,int len,int add)
// {
//     for(int i=0;i<len;i++)
//     {
//         param[i]=param[i]+add;
//     }
// }

int main()
{
    int arr1[3]={1,2,3};
    int arr2[5]={4,5,6,7,8};
    // printf("arr1=%d\n",arr1);
    showaray(arr1,sizeof(arr1)/sizeof(int));
    showaray(arr2,sizeof(arr2)/sizeof(int));
    
    return 0;
}