#include <stdio.h>

void add(int val);
int num;

int main()
{
    printf("num : %d\n",num);
    add(12);
    printf("num : %d\n",num);
    num++;
    printf("num : %d\n",num);
    
    return 0;
}

void add(int val)
{
    num+=val;
}