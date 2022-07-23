/*
    Loops:
        Loops are used to run same statements over and over
        till a condition is satisfied...

    1. while
    2. do while
    3. for


    while:
        
*/

#include<stdio.h>
void main()
{
        int n;

        n=-5;                       //initialization
        while(n<=3)                 //condition
        {
            printf("Hello\n\n");    //statements;
            n++;            // n = n+1;   increment
        }

}