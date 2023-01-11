#include<stdio.h>

int main()
{
    char *str="simple string";

    printf("1.puts test-----\n");
    puts(str);
    puts("so simple string");

    printf("2.fputs test-----\n");
    fputs(str,stdout);printf("\n");
    fputs("so simple string",stdout);printf("\n");

    printf("3.end fo main-----\n");

    return 0;
}