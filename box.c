#include<stdio.h>

int main(){
     int i,j;

    for(i=1;i<=3;i++)
    {
        for(j=3;j>i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==2 || j==1 || j==2)
            {
                printf("* ");
            }
            else if(i==3 && j==3)
            {
                printf(" ");
            }
            else{
            printf(" ");
            }
        }
     
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=2;j>=i;j--)
        {
            // if(i==3 || j==3)
            // {
            //     printf(" ");
            // }
            // else{
                 printf("* ");
            // }
        }
        printf("\n");
    }
    
    return 0;
}