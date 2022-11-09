#include<stdio.h>
int main()
{
int a,b,c;
        printf("Enter Value in a=");
    scanf("%d",&a);
    printf("\n Enter Value In b=");
    scanf("%d",&b);
    printf("\n Enter value in c=");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("\n%d Number Is Greatest");
    }
    else if(b>a&&b>c)
    {
        printf("\n%dNumber is Greatest ");
    }
    else if (a==b||b==c||a==c)
    {
        printf("\nNumber is Repeated");
    }
    return 0;
}
