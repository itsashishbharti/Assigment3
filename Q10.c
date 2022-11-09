#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter Cost Price=");
    scanf("%d",&cp);
    printf("\nEnter Sellipg Price=");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp)
    {
        printf("\nProfite%%=%d",100*profit/cp);
    }
    else
    {
            printf("\n Loss%%=%d",100*loss/cp);
    }
    return 0;
}