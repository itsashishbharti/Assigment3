#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Years=");
    scanf("%d",&a);
    if(((a%4==0)&&(a%100!=0))||(a%400==0))
    {
        printf("\n%dYear is Leap Year");
    }
    else
    {
        printf("\n %d Year is not Leap Year");
    }
    return 0;
}