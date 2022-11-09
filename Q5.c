#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number=");
    scanf("%d",&a);
    if(a>99 && a<=999)
    {
        printf("\n Yes %d Is three Digit Number",a);
    }
    else
    {
        printf("\n No %d Is  Not three digit Number",a);
    }
    return 0;
}