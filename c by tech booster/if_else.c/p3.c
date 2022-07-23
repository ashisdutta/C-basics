// Program to find the largest number of the three.
#include<stdio.h>

int main(){
    int a,b,c;
    a=b=c=0;
    printf("Enter three numbers\n");
    scanf("%d\n%d\n%d", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is largest", a);
    }
    else if(b>c && b>a)
    {
        printf("%d is largest", b);
    }
    else if(c>a && c>b)
    {
        printf("%d is largest", c);
    }
    else if(a==b && a==c)
    {
        printf("all are equal");
    }


    
    return 0;
}