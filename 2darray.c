#include<stdio.h>

int main()
{
    int a[10][10], i,j, r,c;

    printf("\n Enter no of rows :");
    scanf("%d", &r);

    printf("\n Enter no of columns :");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            /* code */
            printf("\n Enter elements at [%d][%d] :",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            /* code */
            printf("%d \t", a[i][j]);
        }

        printf("\n");
        return 0;
    }

}