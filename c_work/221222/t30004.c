#include <stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(int);
    int *ptr=arr;

    for(int start=0,end=len-1;start<len/2;start++,end--)
    {
        printf("start =%d,end=%d\n",start,end);
        int temp=*(ptr+end);
        *(ptr+end)=*(ptr+start);
        *(ptr+start)=temp;
    }
    for(int i=0;i<len;i++)
    {
        printf("ptr[%d]=%d\n",i,ptr[i]);
    }
}