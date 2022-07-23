#include<stdio.h>

int powerfn(int num, int power)
{
    int result=1;
    if(power==1)
    {
        return num;
    }
    else if(power==0){
        return 1;
    }
    else
    {
        power--;
        result=num * powerfn(num,power);
        return result;
    }
}

int main()
{
    int num,power,result;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&power);

    result=powerfn(num,power);

    printf("\n\n\t %d^%d = %d \n",num,power,result);
    
    return 0;
}