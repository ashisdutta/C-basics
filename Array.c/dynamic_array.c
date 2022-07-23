#include<stdio.h>
#include<malloc.h>

int main()
{
    int i,size,*p;

    printf("input the size of an array");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));

    for(i=0;i<size;i++)
    {
        printf("enter the value in position %d:",i );
        scanf("%d", &p[i]);

    }
    for(i=0;i<size;i++)
    {
        printf("\n %d", p[i]);
    }



    return 0;
}