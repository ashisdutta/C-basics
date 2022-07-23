//for multiple student
#include<stdio.h>

struct student
{
    int roll;
    float per;

};

int main(){
    int size, i;

    printf("enter the total number of student\n");
    scanf("%d",&size);

    struct student s[size];

    for(i=0;i<size;i++)
    {
    printf("enter roll no.\n");
    scanf("%d",&s[i].roll);
   
    printf("enter persentage \n"); 
    scanf("%f",&s[i].per);
    }
     printf("\troll\t\tper\n");
     printf("\t=============================\n");
    for(i=0;i<size;i++)
    {
        printf("\t%d\t\t%f\n",s[i].roll,s[i].per);
    }

    
    return 0;
}