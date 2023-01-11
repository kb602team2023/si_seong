#include <stdio.h>

int main(){
    int result1, result2;
    int num1,num2;

    printf("정수 2가지 선택");
    scanf("%d %d",&num1,&num2);

    result1= num1 / num2;
    result2= num1 % num2;

    printf("%d/%d의 몫: %d\n",num1,num2,result1);
    printf("%d/%d의 나머지: %d",num1,num2,result2);

    return 0;
}