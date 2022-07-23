// Write a C program to find whether a given year is a leap year or not. Go to the editor
// Test Data : 2016
// Expected Output :
// 2016 is a leap year.
// #include<stdio.h>

// int main(){
//     int year;

//     printf("Enter a year:");
//     scanf("%d",&year);

//     if((year%4==0 && year%100!=0)|| year%400==0)
//     {
//         printf("%d is leap year", year);
//     }
//     else{
//         printf("%d is not leap year",year);
//     }
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int chk_year;
 
//     printf("Input a year :");
//     scanf("%d", &chk_year);
//     if ((chk_year % 400) == 0)
//         printf("%d is a leap year.\n", chk_year);
//     else if ((chk_year % 100) == 0)
//         printf("%d is a not leap year.\n", chk_year);
//     else if ((chk_year % 4) == 0)
//         printf("%d is a leap year.\n", chk_year);
//     else
//         printf("%d is not a leap year \n", chk_year);
// }


#include<stdio.h>

int main(){
    int name=0;
    // printf("name\n");
    // scanf("%[\n]s", &name);
    scanf("%s",name);
    printf("%s",name);
    return 0;
}