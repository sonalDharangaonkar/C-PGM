#include<stdio.h>

void main()
{
    int ch, a, b, c;

    printf("\n 1. Addition \t\t 2.Substraction");

    printf("\n Enter your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
            printf("Enter two numbers to add :");
            scanf("%d %d", &a, &b);

            c = a + b;

            printf("The Addition is = %d", c);
        break;

    case 2:
            printf("Enter two numbers to Substract :");
            scanf("%d %d", &a, &b);

            c = a - b;

            printf("The substraction is : %d", c);
        break;
    
    default:
            printf("Please enter a valid choice");
        break;
    }

}