#include<stdio.h>

int main()
{
    int i, sum=0;

    printf("\n Number line from 1 to 10");

    for (i = 1; i <= 10; i++)
    {
        /* code */
        printf("\n %d",i);

        if (i<=5)
        {
            /* code */

            sum = sum + i;
        }
    }
    printf("\n Sum = %d", sum);

    return 0;
    
}