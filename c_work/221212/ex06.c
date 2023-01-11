#include <stdio.h>

int main()
{
    int num;
    printf("숫자 입력\n");
    scanf("%d",&num);

    swich(num)
    {   
            case 10 :
            printf("num 은 10 입니다.");
            break;
        case 20:
            printf("num 은 20입니다.");
            break;
        case 30:
            printf("num 은 30 입니다.");
            break;
        default:
            printf("default");
            break;

   }
    return 0;
}