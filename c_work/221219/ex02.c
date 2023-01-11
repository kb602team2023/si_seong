#include <stdio.h>


void whoareyou(char*test)
{
    printf("=======who are you start=======\n");
    printf("%d\n",test);
    printf("%s\n",test);
    printf("=======who are you end========\n");
}

int main()
{
    char str1[]="my string";
    char *str2="your string";
    printf("%s %s \n",str1,str2);

    str2 ="our string";
    printf("%s %s\n",str1,str2);

    // str1[0]='x';
    // str2[0]='x';
    // printf("%s %s\n",str1,str2);

    printf("&str1 = %d\n",&str1);
    printf("&str2 = %d\n",str2);
    whoareyou(str1);

    return 0;
}