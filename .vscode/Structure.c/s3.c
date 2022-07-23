#include<stdio.h>

struct student
{
    int roll;
    float per,s1,s2;
    char name[100];

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
    printf("enter your name:\n");
    scanf("%s",&s[i].name);
    printf("enter your s1 mark\n");
    scanf("%f",&s[i].s1);
     printf("enter your s2 mark\n");
    scanf("%f",&s[i].s2);
   
    printf("enter persentage \n"); 
    scanf("%f",&s[i].per);
    }
     printf("\troll\t\tname\t\ts1\t\ts2\t\tper\n");
     printf("\t==============================================================\n");
    for(i=0;i<size;i++)
    {
        printf("\t%d\t\t%s\t\t%f\t\t%f\t\t%f\n",s[i].roll, s[i].name, s[i].s1, s[i].s2, s[i].per);
    }

    
    return 0;
}