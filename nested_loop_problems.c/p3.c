/*Write a program in C to display n terms of natural number and their sum.Go to the editor
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
 */

#include<stdio.h>

int main(){
    int i,n,s=0;
    printf("Input value of terms\n");
    scanf("%d",&n);
    printf("The first %d natural number is :\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d",n,s);
    return 0;
}