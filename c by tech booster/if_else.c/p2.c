// program to find even and odd number in c

#include<stdio.h>

int main(){
    int num;

    printf("Enter a number \n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number is even\n");

    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}