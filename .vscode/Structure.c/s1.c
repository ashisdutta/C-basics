#include<stdio.h>

struct student
{
    int roll;
    float per;

};

int main(){
    struct student s1;
    printf("enter roll no.\n");
    scanf("%d",&s1.roll);
   
    printf("enter persentage \n"); 
    scanf("%f",&s1.per);

    printf("\t\troll\t\tper\n");
    printf("---------------------------------------------\n");
    printf("\t\t%d\t\t%f",s1.roll,s1.per);

    return 0;
}