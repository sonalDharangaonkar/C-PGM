#include<stdio.h>

int main()
{
    double a = 100;
    double *p;

    
    int b = 200;
    int *q;
    
    char c = 'Sonal';
    char *r;

    p=&a;
    q=&b;
    r=&c;

    printf("\n Address of a : %u", &a);
    printf("\n The value of a: %d", a);

    printf("\n The address of b: %u", &b);
    printf("\n The Value of b: %d", b);

    printf("\n The address of c: %u", &c);
    printf("\n The Value of c: %c", c);
    
    return 0;

}