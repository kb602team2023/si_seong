#include <stdio.h>

int main()
{
   int a,b,c=1;
   printf("밑 입력");
   scanf("%d",&a);
   printf("지수 입력");
   scanf("%d",&b);

   for(int i=1;i<=b;i++)
   {
    printf("a,b,c,의 값:%d %d %d\n",a,b,c);
    c=c*a;
   }
    printf("%d",c);

    return 0;
}