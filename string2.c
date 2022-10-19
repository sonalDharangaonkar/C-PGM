#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("\n Enter a string :");
    scanf("%s", str1);

    for (i = 0; str1[i]!='\0'; i++)
    {
        /* code */
        str2[i] = str1[i];
    }

    printf("\n Copied string is: %s", str2);
    return 0;
    
}