#include <stdio.h>

int main()
{
    int arr1[]={1,2,3};
    int *p =arr1;

    printf("p[0]=%d\n",p[0]);
    printf("p[1]=%d\n",p[1]);
    printf("p[2]=%d\n",p[2]);

    printf("*(p+0)=%d\n",*(p+0));
    printf("*(p+1)=%d\n",*(p+1));
    printf("*(p+2)=%d\n",*(p+2));


    return 0;
}