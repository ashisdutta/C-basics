// Driving lisence program

#include<stdio.h>

int main(){
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>18)
    {
        printf("you are eligible to apply for driving lisence\n");
    }
    else
    {
        printf("you are not eligible to apply\n");
    }
    return 0;
}