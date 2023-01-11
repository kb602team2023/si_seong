#include <stdio.h>

int cel(int c)
{
    int fah;
    return fah = 1.8*c+32;

}

int fah(int f)
{
    int cel;
    return cel = (f-32)/1.8;

}

int main()
{
    int c,f;
    printf("섭씨의 온도 :");
    scanf("%d",&c);

    printf("섭씨 %d일때 화씨의 온도:%d\n",c,cel(c));

    printf("화씨의 온도:");
    scanf("%d",&f);

    printf("화씨 %d일때 섭씨의 온도 :%d\n",f,fah(f));

    return 0;
}