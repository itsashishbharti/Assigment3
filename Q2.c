#include<stdio.h>
int main()
{
     int a;
    printf("Enter a Number=");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("\nYes Number %d Is Divisible by 5",a);
    }
    else
    {
        printf("\nNo Number %d Is not Divisible by 5",a);
    }
return 0;
}