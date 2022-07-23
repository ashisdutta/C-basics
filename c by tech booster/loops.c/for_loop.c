/*

    For loop:
        Finite loop. Limitation and increment/decrement statement
        is compulsory.

    for(initialize; condition; increment/decrement)
    {
        statements;
    }
*/

#include<stdio.h>
void main()
{
    int n;

    for(n=1; n<=10; n++)
    {
        printf("%d \n",n);
    }
}