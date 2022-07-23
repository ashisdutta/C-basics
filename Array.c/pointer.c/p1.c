#include<stdio.h>

int main(){
    int x,*p;
    x=2;
    p=&x;
    printf("%d\n",*p);
    printf("%d",p);
    return 0;
}