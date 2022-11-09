#include<stdio.h>
int main()
{
    int a,b;
      printf("\n Enter 1st Number=");
      scanf("%d",&a);
      printf("\n Enter 2nd Number=");
      scanf("%d",&b);
    if(a>b)
    {
        printf("\n %d  Is Greater than %d ",a,b);
    }
    else if(a-b==0)
    {
        printf("%d Both Number Are  Same",a);
    }
    return 0;
}