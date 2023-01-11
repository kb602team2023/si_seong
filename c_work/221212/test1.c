#include <stdio.h>

int main()
{
int num,n;
int total = 0;
while(n<5)
{
        n = n + 1;
    printf("정수입력");
    scanf("%d",&num);
    total = total + num;
    printf("합 : %d\n",total);
}

return 0;
}