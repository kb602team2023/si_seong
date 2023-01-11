#include <stdio.h>

int main()
{
    char str[50];
    int idx=0;
    int i;
    printf("입력받을 문자는:");
    scanf("%s",str);

    while(str[idx]!='\n')
    {
        i++;
    }
    
    printf("문자열 크기:%d\n",i);
    
    

    return 0;
}