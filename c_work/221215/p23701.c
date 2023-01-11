/*
#include <stdio.h>
int total=0;

int addtototal(int num)
{
    total+=num;
    return total;
}

int main()
{
    int num,i;
    for(i=0;i<3;i++)
    {
        printf("입력%d: ",i+1);
        scanf("%d",&num);
        printf("누적:%d\n",addtototal(num));
    
    }

    return 0;
}
*/

#include <stdio.h>


int addtototal(int num)
{
    static int total=0;
    total+=num;
    return total;
}

int main()
{
    int num,i;
    for(i=0;i<3;i++)
    {
        printf("입력%d: ",i+1);
        scanf("%d",&num);
        printf("누적:%d\n",addtototal(num));
    
    }

    return 0;
}