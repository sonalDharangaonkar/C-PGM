#include<stdio.h>

int main()
{
    int a = 50;

    int *p;

    p=&a;

    printf("\n Value of P before Increment : %u", p);
    p = p + 5;

    printf("\n Address of a : %u", &a);

    printf("\n Address of p : %u", &p);
    printf("\n Value of a : %d",a);
    printf("\n Value of p : %d",p);

    return 0;

}