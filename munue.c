#include<stdio.h>
int main()
{
   int row,col;
   for(row=1;row<=5;row++)
   {
     for(col=1;col<=row;col++)
     {
       printf("\t%c", '*');
     }
     printf("\n"); 
   }
   for(row=4;row>0;row--) 
   {
     for(col=1;col<=row;col++)
     { 
       printf("\t%c",'*');
     } 
     printf("\n");
  }
    return 0;
}