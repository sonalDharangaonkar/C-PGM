#include<stdio.h>

void main()
{
    int ch, n, sqr, cub, year;

    printf("\n 1. Square and Cubes of Number \t\t 2. LEAP Year ot not");
    printf("Enter your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
            printf("Enter an interger number :");
            scanf("%d", &n);

            sqr = n * n;
            cub = n * n * n;

            printf("The Square of number is : %d", sqr);
            printf("The Cube of the number is : %d", cub);

        break;

    case 2:
            printf("Enter a year :");
            scanf("%d", &year);

            if(year % 400 == 0)
            {
                printf("\n %d is a LEAP Year", year);
            }

            else if (year % 100 == 0)
            {
                /* code */
                printf("\n %d is not a LEAP Year", year);
            }

            else if (year % 4 == 0)
            {
                /* code */
                printf("\n %d is a LEAP Year", year);
            }

            else
            {
                printf("\n %d is not a LEAP Year");
            }
        break;
    
    default:
            printf("Enter a Valid choice");
        break;
    }
}