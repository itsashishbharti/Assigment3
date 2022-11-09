#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number=");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("\nNumber %d Is Positive",a);
    }
    else
    {
        printf("\n Number %d Is Non Positive",a);
    }
    return 0;
}