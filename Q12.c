#include<stdio.h>
int main()
{
    char a;
    printf("\n Enter Your Charecter=");
    scanf("%s",&a);
    if(a>=65&&a<=90)
    {
        printf("\n This Alphabate is Uppercase");
    }
    else if(a>=97&&a<121)
    {
        printf("\n This Alphabate is Lowercase");
    }
    else
    {
        printf("\n This is not Alphabate");
    }
    return 0;
}