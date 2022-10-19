#include<stdio.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int i,j;

    printf("\n Enter 1st string :");
    scanf("%s", str1);

    printf("\n Enter 2st string :");
    scanf("%s", str2);

    i=0;
    j=0;

    while (str1[i]!='\0')
    {
        /* code */
        str3[j] = str1[i];
        i++;
        j++;
    }

    i=0;
    while (str2[i]!='\0')
    {
        /* code */
        str3[j] = str2[i];
        i++;
        j++;
    }
    printf("\n Concatenated string is %s", str3);
    return 0;
}