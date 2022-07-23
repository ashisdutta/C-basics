/*
    do while loop:
    
        <initialize>;
        do
        {
            statements;
            increment/decrement;   optional
        }
        while(condition);
*/

#include<stdio.h>
void main()
{
    int n;
    
    n=1;        // initialize
    
    do
    {
        printf("%d  \n",n);
        n++;            // n=n+1   incrementing n's value
    }
    while(n<=10);       // condition
}