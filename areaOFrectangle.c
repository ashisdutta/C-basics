#include<stdio.h>

int main(){

    int l, b;

    printf("enter the value of langth and breath of ractangle\n");
    scanf("%d\n%d", &l,&b);

    int area_rect = l*b;
    printf("the area is %d :", area_rect);
    return 0;
}