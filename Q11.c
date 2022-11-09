#include<stdio.h>
int main()
{
    int eng,math,sci,sst,hindi;
    printf("\nEnter Your Marks of Eng=");
    scanf("%d",&eng);
    if(eng>=33)
    {
    printf("\nEnter Your Marks of Math= ");
    scanf("%d",&math);
        if(math>=33)
        {
            printf("\nEnter Your Marks of Science= ");
            scanf("%d",&sci);
            if(sci>=33)
            {
                printf("\nEnter Your Marks of Sst= ");
                    scanf("%d",&sst);
                    if(sst>=33)
                    {
                        printf("\nEnter Your Marks of Hindi ");
                        scanf("%d",&hindi);
                        if(hindi>=33)
                        {
                            printf("\n Passed");
                        }
                        else
                        {
                            printf("\n Failed");
                        }
                    }
                    else
                    {
                        printf("\nFailed");
                    }
            }
            else
            {
                printf("\nFailed");
            }
        }
        else
        {
            printf("\nFailed");
        }
    }
    else
    {
        printf("\nFailed");
    }
    return 0;

}