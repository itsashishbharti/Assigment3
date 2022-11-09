#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n Number is Positive");
    }
    else if(a==0)
    {
        printf("\nNumber is Zero");
    }
    else
    {
        printf("\n Number Is Negative");
    }
    return 0;
}