#include<stdio.h>
int main()
{
    int per;
    printf("Enter your percentage");
    scanf("%d", &per);

    if(per>=75)
    {
        printf("You got an A Grade");
    }
    elseif(per>=65 && per<75)
    {
        printf("You got a B Grade");
    }
    elseif(per>=50 && per<65)
    {
        printf("You got a C Grade");
    }

    elseif(per>=35 && per<50)
    {
        printf("You have got a Passed Grade");
    }

    else
    {
        printf("You have failed the exam");
    }
    
    return 0;
}