#include<stdio.h>

int main(){
     
    int t,r,p;
    //s-->simple interest, t-->time period, r-->rate of interest, p-->principal value
    printf("enter the value of princial value\n");
    scanf("%d", &p);
    printf("enter the value of rate of interest\n");
    scanf("%d", &r);
    printf("enter the time period\n");
    scanf("%d", &t);

    float s = ((p*r*t)/100);
    printf("the simple interest is: %f\n", s);
    return 0;

}