#include<stdio.h>

int main()
{
    int arra[2][4]={{1,2,3,4},{5,6,7,8}};
<<<<<<< HEAD
    int arrb[4][2]={ 0 };
=======
    // int arrb[4][2];
>>>>>>> e9952cd91abdd171a57c34ec51253ecb8cbc5da5

    for(int i=0;i<sizeof(arra)/sizeof(arra[0]);i++)
    {
        for(int j=0;j<4;j++)
        {
<<<<<<< HEAD
            // printf("arra[%d][%d]=%d",i,j,arra[i][j]);
            printf("%d",arra[i][j]);
        }
        printf("\n");
    }
    int *ptr0=&arra[0][0],*ptr1=&arra[0][1],*ptr2=&arra[0][2],*ptr3=&arra[0][3];
    int *ptr10=&arra[1][0],*ptr11=&arra[1][1],*ptr12=&arra[1][2],*ptr13=&arra[1][3];

    arrb[0][0]=*ptr0,arrb[0][1]=*ptr10,arrb[1][0]=*ptr1,arrb[1][1]=*ptr11;
    arrb[2][0]=*ptr2,arrb[2][1]=*ptr12,arrb[3][0]=*ptr3,arrb[3][1]=*ptr13;
    for(int i=0;i<sizeof(arrb)/sizeof(arrb[0]);i++)
    {
        for(int j=0;j<2;j++)
        {
            // printf("arrb[%d][%d]=%d",i,j,arrb[i][j]);
            printf("%d",arrb[i][j]);
        }
        printf("\n");
    }
    // printf("%d %d",arrb[0][0],arrb[0][1]);

    return 0;
=======
            printf("arra[%d][%d]=%d",i,j,arra[i][j]);
        }
        printf("\n");
    }
    int *ptr=NULL;
    // ptr=&arra[0][0];

>>>>>>> e9952cd91abdd171a57c34ec51253ecb8cbc5da5
}