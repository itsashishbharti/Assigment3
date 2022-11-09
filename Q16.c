#include<stdio.h>
#include<string.h>
int main()
{
    char s;
    printf("\nEnter your character or digit=");
    scanf("%s",&s);
    if(s>=65 && s<=90)
    {
        printf("\n Uppercase");
    }
    else if(s>=97 && s<=120)
    {
        printf("\nLowercase");
    }
    else if(s>=48 && s<=57)
    {
        printf("\nDigit");
    }
    else
    {
        printf("\nSpecial Character");
    }
    return 0;
}