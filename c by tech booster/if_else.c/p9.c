// Write a C program to accept the height of a person in centimeter and categorize the person according to their height. Go to the editor
// Test Data : 135
// Expected Output :
// The person is Dwarf.

#include<stdio.h>

int main(){
    int h;
    printf("Enter hight of the person in CM:");
    scanf("%d", &h);
    printf("%d",h);

    if(h<150)
    {
        printf("the pweson is Draft");
    }
    else if(h>=150 && h<165)
    {
        printf("the person is Average");
    }
    else if(h>=165 && h<195)
    {
        printf("the person is tall");
    }

    return 0;
}