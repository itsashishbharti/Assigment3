#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter Side A=");
    scanf("%d",&a);
    printf("\nEnter Side B=");
    scanf("%d",&b);
    printf("\n Enter Side C=");
    scanf("%d",&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf("\nTriangle is Valid");
    }
    else
    {
        printf("\nTriangle is not Valid");
    }
    return 0;
}