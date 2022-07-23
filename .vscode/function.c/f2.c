#include<stdio.h>


    int fact(int n)
    {
       int factorial=1;
        if(n==1 || n==0)
        {
            return 1;
        }
        else
        {
            factorial=n*fact(n-1);
            return factorial;
        }
    }
    int main()
    {
        int n,result;
        printf("enter the number to find factorial\n");
        scanf("%d",&n);

        result=fact(n);
        printf("the factorial of %d is %d",n,result);

        return 0;
    }
 
