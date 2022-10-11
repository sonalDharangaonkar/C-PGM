/*Area of Cirlce using 1st function category */
#include<stdio.h>

float area(float);          //function prototype
float pi = 3.14;            // Global Declarations

int main()
{
    float r, a;

    printf("\n Enter a radius :");
    scanf("%f", &r);

    a = area(r);        //function call
    printf("\n Area of circle is : %f", a);
}

//Function Definition

float area(float r)
{
    float a;
    a = pi*r*r;

    return a;
}