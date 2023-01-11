#include <stdio.h>

int aa(int a, int b, int c)
{
       
    if(a>b)
    {
        return a;
    }
   if(b>c)
   {
        return b;
   }
   if(c>a)
   {
        return c;
   }
   
  
}

int bb(int a,int b, int c)
{
    
    if(a<b)
    {
        return a;
    }
    if(b<c)
    {
        return b;
    }
    if(c<a)
    {
        return c;
    }

}
int main()
{
    int a,b,c;

    printf("세 정수 출력");
    scanf("%d %d %d",&a,&b,&c);

    printf("세 정수중 가장 큰 정수는: %d\n",aa(a,b,c));
    printf("세 정수중 가장 큰 정수는: %d\n",bb(a,b,c));

    return 0;
}