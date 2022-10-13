#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100];
    int n;

    printf("\n Enter how many elements you want to store in an Array :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("\n Enter elements at a[%d]", i);
        scanf("%d", &a[i]);
    }

    printf("\n Array elements are as follows :");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("\n Elements at a [%d] : %d", i, a[i]);
    }

    return 0;
    
    
}