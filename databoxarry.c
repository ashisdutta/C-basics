#include<stdio.h>

int main(){
    int arr[3][4],r,c;
    printf("enter 3 roll numbers :\n");

    for(r=0;r<=2;r++)
    {
        scanf("%d",&arr[r][0]);
    }
    for(r=0;r<=2;r++)
    {
        for(c=1;c<=2;c++)
        {
            printf("enter s%d mark for roll no. %d : ",c,arr[r][0]);
            scanf("%d",&arr[r][c]);
        }
    }


    for(r=0;r<=2;r++)
    {
        arr[r][3]=(arr[r][1]+arr[r][2])/2;
    }

printf("\n\n\tRoll\tS1\tS2\tFinal\n");
printf("==================================================\n");

    for(r=0;r<=2;r++)
    {
        for(c=0;c<=3;c++)
        {
            printf("\t%d",arr[r][c]);
        }
        printf("\n");
    }

   
    return 0;
}