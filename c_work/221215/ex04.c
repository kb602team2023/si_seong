#include <stdio.h>

void doA(int *a)
{
    *a = 20;
}
int main()
{
    int a = 10;
    char str[10] ="hihi";
    printf("&a = %d\n",&a);
    printf("str = %d\n",str);

    printf("숫자 입력");
    scanf("%d",&a);
    printf("문자열 입력");
    scanf("%s",str);

    printf("a = %d\n",a);
    printf("str = %s\n",str);

    doA(&a);
    printf("a = %d\n",a);

    return 0;
}