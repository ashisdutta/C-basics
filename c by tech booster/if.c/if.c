#include<stdio.h>

int main(){
    int num;

    printf("Enter a no. to check whether a no. is even or odd");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("%d is a even no.",num);
    }
    // else{
    //     printf("%d is not even no.",num);
    // }
    
    return 0;
}