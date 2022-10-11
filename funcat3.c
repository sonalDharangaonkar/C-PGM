/*Area of Circle using 3rd catrogory of function*/

#include<stdio.h>

void area(float);
float pi = 3.14;

int main()
{
    float r;
    printf("\n Enter Radius :");
    scanf("%f", &r);
    area(r);
    return 0;
}

void area(float r)
{
    float a;
    a = pi*r*r;
    printf("\n Area of Circle is : %f", a);
}