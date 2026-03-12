//
//  main.c
//  Queue_implementation
//
//  Created by sai kumar mohini on 22/02/26.
//

#include <stdlib.h>
#include <stdio.h>
#define max_size 10
void Q_push(void);
void Q_pop(void);
void Display(void);
int queue[max_size],front = 0,rear = -1;
int main(void)
{
    printf("------------------- QUEUE IMPLEMENTATION --------------------\n");
    printf("Press 1 for Q_push()\n");
    printf("Press 2 for Q_pop()\n");
    printf("Press 3 for Display()\n");
    printf("Press 4 for exit\n");
    printf("-------------------------------------------------------------\n");
    int choice = '\0';
    while(choice != 4){
        printf("Enter you choice among the given options:- ");
        scanf(" %d",&choice);
        switch(choice)
        {
            case 1:
                Q_push();
                break;
            case 2:
                Q_pop();
                break;
            case 3:
                Display();
                break;
            default:
                printf("Invalid!\n");;
        }
    }
    
}

void Q_push(void)
{
    rear++;
    printf("Enter the Number to be pushed:- ");
    int num;
    scanf(" %d",&num);
    if(num != '\0')
    {
        queue[rear] = num;
    }
}

void Q_pop(void)
{
    if(rear == -1 || front == rear + 1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("%d is popped\n",queue[front]);
        queue[front] = '\0';
        front++;
    }
}

void Display(void)
{
    if(rear == -1 || front == rear + 1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
