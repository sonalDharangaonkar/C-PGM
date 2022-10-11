/*Area of circle using 2nd catergory of function*/

#include<stdio.h>
float area()
float pi = 3.14;

int main()
{
    float a;
    a = area();
    printf("\n Area of Circle : %f", a);
    return 0;
}

float area()
{
    float a, r;
    printf("\n Enter a Radius :");
    scanf("%f", &r);

    a = pi*r*r;
    return a;
}