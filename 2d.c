#include<stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("\n Enter rows and columns size :");
    scanf("%d %d", &r, &c);

    for (i=0;i<r;i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter elements at [%d][%d] :", i,j);
            scanf("%d", &a[i][j]);
        }
        
    }

    //display the array elements

    for (i = 0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d \t", a[i][j]);
        }

        printf("\n");
        
    }

    //transpose logic

    printf("\n Transpose Matrix is as follows :\n");

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d \t", a[j][i]);
        }

        printf("\n");
        
    }

    return 0;
    
    
    
}