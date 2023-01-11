#include <stdio.h>

int main()
{
    char arr[]={'g', 'o', 'o', 'd',' ', 't', 'i', 'm', 'e'};
    int i,arrlen;
    arrlen=sizeof(arr)/sizeof(char);
    for(i=0;i<arrlen;i++)
    {
        printf("%c",arr[i]);
    }
    

    return 0;
}