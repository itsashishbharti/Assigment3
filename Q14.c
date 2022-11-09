#include<stdio.h>
int main()
{
     int a;
    printf("\n Enter Your Number=");
    scanf("%d",&a);
    if(a%7==0||a%3==0)
    {
        printf("\n %d Is divisible from any one 7 or 3",a);
    }
    else 
    {
         printf("\n %d Is divisible from No one",a);
    }

}