#include <stdio.h>

int main()
{
    int num;
    int a = 1;
    printf("숫자 배정:");
    scanf("%d",&num);

    while(a<=num)
    {   
    
        printf("%d x %d = %d %d\n",num,a,3*a,a);
        a++;
    
       
     }
    
   return 0;
}