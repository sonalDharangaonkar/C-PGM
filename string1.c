#include<stdio.h>

int compare(char[], char[]);
int main()
{
    char str1[100], str2[100];
    int c;

    printf("\n Enter first string :");
    scanf("%s", str1);

    printf("\n Enter second string :");
    scanf("%s", str2);

    c=compare(str1, str2);

    if(c==0)
        printf("\n Both strings are equal");
    else
        printf("\n The strings are not equal");

    return 0;
}

int compare(char a[], char b[])
{
    int flag=0, i=0;

    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        return 0;
    else
        return 1;
}