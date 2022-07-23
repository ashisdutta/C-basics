#include<stdio.h>

void main(){
    char name[50];

    printf("enter your name (press ; to end the statement):\n");
    scanf("%[^\n]s",&name);
    printf("your name is:\n");
    printf("%s",name);

}