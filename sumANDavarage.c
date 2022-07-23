#include<stdio.h>

int main(){
    int sum, a ,b;
    printf("enter the value of a and b\n");
    scanf("%d\n%d", &a, &b);
    sum = a + b;
   float  avg = (float)sum/2;
    printf("sum is:%d\n", sum);
    printf("the average is:%f", avg);
    return 0;
}