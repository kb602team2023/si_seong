#include <stdio.h>

int main()
{
    char str[] = "good monring!";

    printf("배열 str의 크기:%d\n",sizeof(str));
    printf("str = %s\n",str);
    str[12] = '?';
    printf("str = %s\n",str);
    printf("str[13] = %c\n",str[13]);
    printf("str[13] = %d\n",str[13]);

    return 0;
}