#include <stdio.h>

int main()
{
    /*
    처음 수 a 나중 수 b
    */
   int a,b,is;
   printf("처음 수");
   scanf("%d",&a);
   printf("두번째 수");
   scanf("%d",&b);

   if(a>=b)
   {
    is = 1;
    while(is<10)
    {
        printf("%d의 구구단 값:%d\n",b,b*is);
        b++;
        is++;
        continue;
    }
   }
   else
   {
    while(is<10)
    {
        printf("%d의 구구단 값:%d\n",a,a*is);
        a++;
        is++;
        continue;
    }
   }



   return 0;
}