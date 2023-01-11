#include <stdio.h>

int main()
{
    int arr[3][4]=
    {
        {1,2,3},{4,5},{6,7,8}
    };

    printf("sizeof(arr) =%d\n",sizeof(arr));
    printf("sizeof(arr) =%d\n",sizeof(arr[0]));
    printf("sizeof(arr) =%d\n",sizeof(arr[1]));  
    printf("sizeof(arr) =%d\n",sizeof(arr[2]));
    
    for(int x=0;x<sizeof(arr)/sizeof(arr[0]);x++)
    {
        for(int y=0;y<sizeof(arr[x])/sizeof(int);y++)
        {
            printf("arr[%d][%d]=%d\n",x,y,arr[x][y]);
        }
    }

    return 0;
}