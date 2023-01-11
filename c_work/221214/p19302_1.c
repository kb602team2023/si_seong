#include <stdio.h>

int main()
{
    int A, Z, result;

    while (A < 10)
    {
        
        Z=0;
        while (Z < 10)
        {
            Z++;
            
            result = (10 * A + Z) + (10 * Z + A);
            // printf("A 의 값%d", A);
            // printf("Z 의 값%d\n", Z);
            if (result == 99)
                printf("%d%d+%d%d=%d\n", A, Z, Z, A, result);   
            continue;
        }
        A++;
        // printf("A 의 두번째 값%d\n", A);
    }
    
    return 0;
}