#include <stdio.h>

int main(){
    int num1, num2, num3;
    int result1, result2, result3, result4;
    
    printf("정수 세 개의 숫자:");
    scanf("%d %d %d",&num1,&num2,&num3);

    result1 = num1 - num2;
    result2 = num2 + num3;
    result3 = num3 % num1;
    result4 = result1 * result2 * result3;

    printf("%d * %d * %d = %d",result1,result2,result3,result4);


    return 0;
}