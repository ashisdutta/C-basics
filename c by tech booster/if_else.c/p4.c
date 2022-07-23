//Program to calculate the grade of the student according to the specified marks.

#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if(marks>= 85 && marks<=100)
    {
        printf("your grade is A");
    }
    else if(marks>=60 && marks<85)
    {
        printf("your grade is B");
    }
    else if(marks>=45 && marks<60)
    {
        printf("your grade is c");
    }
    else if(marks>=30 && marks<45)
   {
       printf("your grade is D");
   }
   else 
   {
       printf("you are fail");
   }
    return 0;
}