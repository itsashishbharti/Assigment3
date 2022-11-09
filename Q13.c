#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter Your Number=");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
    {
        printf("\n %d Is divisible by both 2 and 3",a);
    }
    else 
    {
        printf("\n %d Is Not divisible by both 2 and 3",a);
    }
    return 0;
}