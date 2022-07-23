#include<stdio.h>

int main(){
    
    FILE *nf;

    char ch;

    nf=fopen("new.txt","a");
    fprintf(nf,"\ntesting file handling\n\n");
    fclose(nf);

    nf=fopen("new.txt","r");
    
    while ((ch=getc(nf))!=EOF)
    {
        printf("%c",ch);
    }
    

    fclose(nf);

    return 0;
}