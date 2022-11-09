#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("Enter Value in a=");
    scanf("%d",&a);
    printf("\n Enter Value In b=");
    scanf("%d",&b);
    printf("\n Enter value in c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("\n Roots are Imaginary");
    }
    else if(d==0)
    {
        printf("\n Roots are real or Equal");
        x=-b/(2.0*a);
        printf("\n Root is %f",x);
    }
    else
    {
        printf("\nRoots are real and distinct");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("\nRoots Are :%f____%f",x,y);
    }
    return 0;

}