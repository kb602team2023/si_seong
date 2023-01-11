#include <stdio.h>

int main()
{
    double rad = 0.0;
    

    printf(" 반지름 입력?");
    scanf("%lf", &rad);

    printf("%lf * %lf * 3.14 =%lf",rad,rad,(rad *rad *3.14));


    return 0;
}