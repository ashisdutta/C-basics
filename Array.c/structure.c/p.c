#include<stdio.h>

struct student
{
    int roll;
    char name[100];
    float per;
};

void main(){
 struct student s1;

 printf("enter roll no:");
 scanf("%d", &s1.roll);
}