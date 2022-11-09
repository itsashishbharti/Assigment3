#include<stdio.h>
int main ()
{
     int a;
    printf("Enter a Number=");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nYes Number %d Is Even",a);
    }
    else
    {
        printf("\n Yes Number %d Is Odd",a);
    }

     if(a&1)
    {
       
         printf("\n Yes Number %d Is Odd",a);
    
    }
    else
    {
        printf("\nYes Number %d Is Even",a);
    }
    return 0;
}