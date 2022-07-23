#include<stdio.h>

int main(){

       int days, y, m, d;
       printf("enter the value of days\n");
       scanf("%d", &days);
       y = days/365;
       days = days-(365*y);
       m = days/30;
       d = days-(m*30);
       printf("no. of years: %d\nno. of months:%d\nno. of days:%d", y, m, d);
       return 0;   
}