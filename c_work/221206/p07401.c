#include <stdio.h>

int main(){
    int result1,result2;
    int num1,num2;

    printf("num1의 정수는: ", &num1 );
    scanf("%d",&num1);
    
    printf("num2의 정수는: ", &num2);
    scanf("%d", &num2);

    result1 = num1 - num2;
    result2 = num1 * num2;

    printf("%d - %d = %d\n",num1,num2,result1);
    printf("%d * %d = %d\n", num1,num2,result2);

    return 0;
}