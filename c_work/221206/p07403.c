#include <stdio.h>

int main(){
    int result;
    int a;

    printf("정수 입력");
    scanf("%d",&a);

    result = a * a;
    printf("%d * %d = %d",a,a,result);

    return 0;
}