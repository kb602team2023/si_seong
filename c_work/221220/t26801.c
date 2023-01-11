#include <stdio.h>

int main()
{
    char str[100];
    int len;
    printf("문자열 입력:");
    scanf("%s",str);

    for(int i=0;i<100;i++)
    {
        if(str[i]=='\0')
        {
            printf("i=%d\n",i);
            len=i;
            break;
        }
    }
    // if(len%2==0)
    // {
        for(int i=0;i<len/2;i++)
        {
            char temp=str[i];
            str[i]=str[len-(i+1)];
            str[len-(i+1)]=temp;

        }
    // }
    // else
    // {

    // }
    printf("%s\n",str);

    return 0;
}