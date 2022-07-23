#include<stdio.h>

int main(){
    int mark;
    int m=mark;

    printf("enter the mark");
    scanf("%d", &mark);

    if(m>=90 && m<=100){
        printf("grade: A");
        }
        else if(m>=80 && m<90){
        printf("grade: B");
        }
        else if(m>=70 && m<80){
        printf("grade: C");
        }
        else if(m>=60 && m<70){
        printf("grade: D");
        }
        else{
            printf("fail you motherfucker bitch");
        }

        return 0;
    
}