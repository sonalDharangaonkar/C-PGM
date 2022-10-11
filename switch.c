#include<stdio.h>

int main()
{
    int ch,a,b,c;

    printf("\n Below are the Choices for you to Choose");
    printf("\n 1.Add \t\t 2. Sub \t\t 3. Div \t\t 4.Multi \t\t 5.Exit");
    
    printf("Enter your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
            printf("Enter 2 Numbers to Add :");
            scanf("%d %d", &a, &b);

            c = a + b;

            printf("The Addition is : %d", c);
        break;
    
    case 2:
            printf("Enter 2 Numbers to Sub :");
            scanf("%d %d", &a, &b);

            c = a - b;

            printf("The Subtraction is : %d", c);
            break;

    case 3:
            printf("Enter 2 Numbers to Div :");
            scanf("%d %d", &a, &b);

            c = a / b;

            printf("The Divion is : %d", c);
    case 4:
            printf("Enter 2 Numbers to Multiply :");
            scanf("%d %d", &a, &b);

            c = a * b;

            printf("The Multiplication is : %d", c);
            break;
    case 5:
            printf("Bye Bye !");
            break;
    default:
            printf("Enter a Valid Choice");
        break;
    }

    return 0;
}