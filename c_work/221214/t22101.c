#include <stdio.h>

int retbvalue(int a,int b,int c)
{   
    if (a>b)
    {
        if (a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int retsvalue(int a,int b,int c)
{
    if(a>b)
    {
        if(b>c)
        {
            return c;
        }
        else
        {
            return b;
        }
    }
    else
    {
        if(a>c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }
}

int main()
{
    int a,b,c;
   printf("세 정수 출력");
   scanf("%d %d %d",&a,&b,&c);
   printf("가장 큰 수: %d\n",retbvalue(a,b,c));
   printf("가장 작은 수: %d\n",retsvalue(a,b,c));


    return 0;
}