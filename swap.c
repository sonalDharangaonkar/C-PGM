#include<stdio.h>

void swap(int, int);

int main()
{
    int n1, n2;
    printf("\n Enter two No's to swap :");
    scanf("%d %d", &n1, &n2);

    printf("\n Before Swapping n1=%d n2=%d", n1,n2);

    swap(n1,n2);

    printf("\n After swapping n1=%d n2=%d",n1,n2);
    return 0;
}

 void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n Inside the swap function a=%d b=%d", a, b);
}