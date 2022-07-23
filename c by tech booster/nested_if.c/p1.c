// Write a C program to find the largest of three numbers. Go to the editor
// Test Data : 12 25 52
// Expected Output :
// 1st Number = 12,        2nd Number = 25,        3rd Number = 52
// The 3rd Number is the greatest among three


#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("1st number = %d,\t 2nd number = %d, \t 3rd number = %d\n",a,b,c);

    if(a>b && a>c)
    {
        if(b<c)
        {
            printf("%d>%d>%d",a,b,c);
        }
        else if(c>b)
       {
           printf("%d>%d>%d",a,c,b);
       }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d>%d>%d",b,a,c);
        }
        else if(c>a)
        {
            printf("%d>%d>%d",b,c,a);
        }
    }
    else if(c>a && c>b)
    {
        if(a>b)
        {
           printf("%d>%d>%d",c,a,b);  
        }
        else if(b>a)
        {
            printf("%d>%d>%d",c,b,a);
        }
       
    }
    else if(a==b==c)
    {
        printf("\nall are equal");
    }
    return 0;
} 