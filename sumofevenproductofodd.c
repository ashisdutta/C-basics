// #include<stdio.h>


// int main()
// {
//   int n,sum=0,mul=1,i;
//   printf("Enter 10 numbers:\n");
//   for(i=0;i<10;i++)
//   {
//       printf("\nEnter %d number: ",i+1);
//         scanf("%d",&n);
//       if(n%2==0)
//         sum=sum+n;
//       else
//         mul=mul*n;
//   }
//   printf("\nThe sum of evennumbers is : %d \n",sum);
//   printf("\nThe multiplication of odd numbers is : %d\n",mul);
// return 0;
// }
#include<stdio.h>
int main(){
   int small,large,p,q,r,s;
   printf("enter any four numbers:");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   small=p;
   large=p;
   if(small>q) //checking 1st and 2nd number
      small=q;
   else if(large<q)
     large=q;
   if(small>r) //checking 1st and 3rd number
     small=r;
   else if(large<r)
      large=r;
   if(small>s) //checking 1st and 4th number
     small=s;
   else if(large<s)
      large=s;
   printf("Largest number from the given 4 numbers is:%d\n",large);
   printf("Smallest numbers from the given 4 numbers is:%d",small);
   return 0;
}