#include<stdio.h>
void main()
{
    int i,j,size=2;

    for(i=1;i<=size;i++)
    {
        for(j=size;j>i;j--)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            if(i==1 || j==1 || j==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for(i=1;i<=size-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }

        for(j=size-1;j>=i;j--)
        {
            if(j==1 || j==size-1 || j==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
