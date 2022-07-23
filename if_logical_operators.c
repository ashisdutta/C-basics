#include<stdio.h>

int main(){

    int age;
    //int vippass=0;
    int vippass = 1;

    printf("Enter the age:\n");
    scanf("%d", &age);

    if((age>=18 && age<=70)||vippass==1){


        printf("you can drive car");
    }
    else{
        printf("you cannot drive");
    }

    return 0;
}