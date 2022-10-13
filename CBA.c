#include<stdio.h>

int main()
{
    float a, b;
    float *n1, *n2;
    float sum;

    printf("\n Enter the two numbers to add :");
    scanf("%f %f", &a, &b);

    n1 = &a;
    n2 = &b;
    sum = *n1 + *n2;

    printf("\n The sum of %f and %f is %f", a, b, sum);
    return 0;
}