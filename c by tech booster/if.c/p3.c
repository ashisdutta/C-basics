#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);


//     if(a>b && a>c)
//     {
//         printf("%d is the greatest", a);
//     }
//     else if(b>c && b>a)
//     {printf("%d is the greatest", b);
//     }
// else {
//     printf("%d is the greatest", c);
// }


int great = a>b && a>c ? a : b > c ? b : c ;
printf(" greater no. is %d", great);
    return 0;
}