//
//  main.c
//  Stack_implementation
//
//  Created by sai kumar mohini on 21/02/26.
//

#include <stdlib.h>
#include <stdio.h>
#define max_size 10
void Push(void);
void Pop(void);
void Display(void);
int stack[max_size] , top = -1;
int main(void)
{
    printf("------------- STACK OPERATIONS -------------\n");
    printf("press 1 for push()\n");
    printf("press 2 for pop()\n");
    printf("press 3 for display()\n");
    printf("press 4 for exit\n");
    printf("--------------------------------------------\n");
    int inp = 0;
    while(inp != 4){
        printf("Enter the given number:- ");
        scanf(" %d",&inp);
        switch(inp)
        {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Display();
                break;
            default:
                exit(0);
        }
    }
}

void Push(void)
{
    int num;
    top++;
    printf("Enter the Number to insert into task:- ");
    scanf(" %d",&num);
    if(top > 9)
    {
        printf("Stack is full!\n");
    }
    else{
        stack[top] = num;
    }
}

void Pop(void)
{
    if(top == -1)
    {
        printf("Stack is empty!\n");
    }
    else{
        printf("popped element %d\n",stack[top]);
        stack[top] = '\0';
        top--;
    }
}

void Display(void)
{
    if(top == -1)
    {
        printf("Stack is empty!\n");
    }
    else{
        for(int i = top; i >= 0; i--){
            printf("%d\n",stack[i]);
        }
    }
}

