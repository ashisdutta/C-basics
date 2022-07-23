/*Write a program in C to read 10 numbers from keyboard and find their sum and average. Go to the editor
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/

#include<stdio.h>

int main(){
    int i,n,s=0;
    float avg=0;
    printf("Input the 10 numbers :\n");

    for(i=1;i<=10;i++)
    {
        printf("Number-%d :",i);
        scanf("%d",&n);
        s=s+n;
       
    }
    printf("the sum of 10 no is : %d\n",s);
    printf("The Average is : %f",s/10.0);
    return 0;
}