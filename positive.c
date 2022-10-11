#include<stdio.h>

int main()
{
    int no;
    printf("Enter your desire Number");
    scanf("%d", &no);

    if(no>0)
    {
        printf("Number is Positive : %d", no);
    }
    else if (no<0)
    {
        printf("Number is Negative : %d", no);
    }

    else
    {
        printf("Number is Zero");
    }

    return 0;
    
}