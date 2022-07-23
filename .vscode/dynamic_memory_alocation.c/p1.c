#include<stdio.h>
#define max 5
int stack[max],top= -1;

void main(){
    int n=0,in,out;
    while(n!=3)
    {
        printf("\n\n\n\n\t the stack is :");

        for(int i=0; i<max; i++)
        {
            printf("%d\t", stack[i]);
        }
        printf("\n\n\n\t 1. Push an element into the stack");
        printf("\n\t 2.pop an element from the stack");
        printf("\n\t 3. Exit\n\n");
        printf("\t Choose an option");
        printf("%d",&n);

        switch(n)
        {
            case 1:
                if(top<max-1)
                {
                    printf("\n\t Enter the value to Push:");
                    scanf("%d", &in);
                    push(in);
                    printf("\n\t %d is pushed...", in);
                }
                else
                    printf("\n\n\t sorry, the stack is full...");
                    break;
            case 2:
                out=pop();
                if(out==-1)
                    printf("\n\n\t stack is empty...!");
                else
                    printf("\n\n\t %dis popped.....", out);
                    break;
            case 3: break;
                    default:printf("\n\n\t Invalid input...");
            }
        }
    }
    void push(int num)
    {
        top++;
        stack[top]=num;
    }
    int pop()
    {
        int pop_out;
        if(top==-1)
         return(top);
        else
        {
            pop_out = stack[top];
            stack[top]=0;
            top--;
            return(pop_out);
        }

    }

    

