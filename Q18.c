#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter Months Number=");
    scanf("%d",&a);
    if(a==1||a%2!=0)
    {
        printf("\n31 Days in %d Month",a);
    }
    else if(a>2&&a%2==0)
    {
        printf("\n 30 Days in %d MOnth",a);
    }
    else if(a==2)
    {
        printf("\n 28 Days in %d Month",a);
    }
    else if (a>12)
    {
        printf("\n Not Vaild Month");
    }
}