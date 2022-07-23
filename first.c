// #include<stdio.h>

// int main(){
     
//      int b,r,l,h,bs;

//      //area of rectangle 
//      printf("enter the value of length and bradth of ractangle\n");
//      scanf("%d\n%d", &l,&b);
//      int area_ractangle = l*b;
//      printf("the area of ractangle is = %d\n", area_ractangle);
//      printf("enter the value of radius\n");
//      scanf("%d", &r);
//      float area_circle = 3.14*r*r;
//      printf("the are of circle is = %f", area_circle);
//      //area of triangle 
//      printf("enter the langth of base and hight\n");
//      scanf("%d\n%d", &bs,&h);
//      float area_triangle = 0.5*bs*h;
//      printf("the area of triangle is = %f", area_triangle);
//     return 0;
// }#include<stdio.h>

int main(){
     
     int b,r,l,h,bs;

     //area of rectangle 
     printf("enter the value of length and bradth of ractangle\n");
     scanf("%d\n%d", &l,&b);
     int area_ractangle = l*b;
     printf("the area of ractangle is = %d\n", area_ractangle);
     printf("enter the value of radius\n");
     scanf("%d",&r);
     float area_circle = 3.14*r*r;
     printf("the are of circle is = %f\n", area_circle);
     //area of triangle 
     printf("enter the langth of base and hight\n");
     scanf("%d\n%d", &bs,&h);
     float area_triangle = 0.5*bs*h;
     printf("the area of triangle is = %f\n", area_triangle);
    return 0;
}