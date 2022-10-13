#include<stdio.h>
#include<conio.h>

void swap(int *, int *);
void main()
{
    int n1, n2;
    printf("\n Enter two numbers :");
    scanf("%d %d", &n1,&n2);

    printf("\n Before Swapping :");
    printf("n1 : %d and n2 : %d", n1, n2);

    swap(&n1, &n2);
    printf("\n After Swapping :");
    printf("\n n1 : %d and n2 : %d", n1, n2);

    //return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}