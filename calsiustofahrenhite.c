// wrong//// #include<stdio.h>
// int main(){
//     float c, f;
//     printf("enter the temprature in celsius\n");
//     scanf("%d",&c);
//     f = (1.8*c)+32;
//     printf("the temprature in fahrenhit is:%f\n",f);
    
//     printf("enter the temprature in fahrenhit\n");
//     scanf("%d", &f);
//     c = (0.55*f)-32;
//     printf("the temprature in celsius is:%f", c);

//     return 0;

// }
#include<stdio.h>
 int main()
 {
   float fah,rcen,cen,rfah;
    printf("\n Enter the temperature in fahrenheit ");
    scanf("%f",&amp,fah);
    rcen=(0.55*fah)-32.0;
    printf("\n The temperature %f in fahrenheit is %f in celcius",fah,rcen);
    printf("\n Enter the temperature in celcius ");
    scanf("%f",&amp,cen);
    rfah=(1.8*cen)+32.0;
    printf("\n The temperature %f in celcius is %f in fahrenheit",cen,rfah);
   return 0;
 }