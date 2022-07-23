//Factorial of a no.
#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
       fact = n*factorial(n-1);
    }

    return fact;

}

int ncr(int n,int r)
{
    int result;
    result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

int main(){
    int i,j,n,num;

    printf("enter number of lines: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
         for(j=n-1;j>i;j--)
        {
            printf("\t");
        }
        for(j=0;j<=i;j++)
        {
            printf("\t\t%d",ncr(i,j));
        }
        printf("\n");
    }
    return 0;
}
