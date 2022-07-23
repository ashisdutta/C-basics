#include<stdio.h>

int main(){

    char name[100];
    printf("what is your Name:");
    scanf("%[^\n]s",&name);

    int option=0,bill=0;
    char yn='y';

    while(yn=='y' || yn=='Y')
    {
        printf("\n\t       recipes    \n");
        printf("\t===================================\n");
        printf("\t 1. soup......120/- \n");
        printf("\t 2. roll....100/-\n");
        printf("\t 3.veg samosa...20/- \n");
        printf("\t 4.chicken samosa...50/- \n");
        printf("choose an option:");
        scanf("%d",&option);

        switch(option)
        {
            case 1: bill=bill+120;printf("\n\t You ordered soup: 120/=");break;
            case 2: bill=bill+100;printf("\n\t You ordered roll: 100/=");break;
            case 3: bill=bill+20;printf("\n\t You ordered veg samosa: 20/=");break;
            case 4: bill=bill+50;printf("\n\t You ordered chicken samosa: 50/=");break;

            default: printf("\n\t Invalid input");break;
        }
        printf("\n\t Would you like to order anything else? (press Y/N):");
        scanf("%s",&yn);
    }
    
    printf("\n Total bill of %s:%d/-\n\n\n", name,bill);

    return 0;
}