#include<stdio.h>


 int main()
 {
   float number;

   printf("Enter a number: ");
   scanf("%f",&number);

   if(number>0)
   {
     printf("%.2f is a positive number",number);
   }
   else if(number<0)
   {
     printf("%.2f is a negative number",number);
   }
   else
   {
     printf("Number is zero");
   }

 
    return 0;
}