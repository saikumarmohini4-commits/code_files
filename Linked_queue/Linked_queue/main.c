//
//  main.c
//  Linked_queue
//
//  Created by sai kumar mohini on 07/04/26.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front;
struct node *rear;
int pointer = 0;
void Insert(void);
void Delete(void);
void Display(void);
void Search(void);
void Peak(void);
void Func(void);
int main(void)
{
    printf("----------------- Linked_Queue -------------------\n");
    printf("Enter -inst for Insert\n");
    printf("Enter -delt for Delete\n");
    printf("Enter -disp for Display\n");
    printf("Enter -seek for Search\n");
    printf("Enter -peak to return the top value!\n");
    printf("Enter exit for Exit\n");
    printf("--------------------------------------------------\n");
    /*front = malloc(sizeof(struct node));
    rear = malloc(sizeof(struct node));*/
    //rear = front;
    char comd[5];
    printf("Enter the command: ");
    scanf(" %s",comd);
    while(true)
    {
        if(strcmp(comd,"-inst") == 0)
        {
            Insert();
        }
        else if(strcmp(comd,"-delt") == 0)
        {
            Delete();
        }
        else if(strcmp(comd,"-disp") == 0)
        {
            Display();
        }
        else if(strcmp(comd,"-seek") == 0)
        {
            Search();
        }
        else if(strcmp(comd,"-peak") == 0)
        {
            Peak();
        }
        else if(strcmp(comd,"....") == 0)
        {
            Func();
        }
        else if(strcmp(comd,"exit") == 0)
        {
            break;
        }
        printf("Enter the command: ");
        scanf(" %s",comd);
    }
    return 0;
}
void Insert(void)
{
    int num;
    printf("Enter the Number: ");
    scanf(" %d",&num);
    if(pointer == 0)
    {
        front = malloc(sizeof(struct node)); //Allocates memory every time the pointer reaches zero.....
        rear = malloc(sizeof(struct node));
        front->data = num;
        rear = front;
        pointer++;
    }
    else
    {
        struct node *new = malloc(sizeof(struct node));
        /*printf("Enter the Number: ");
        scanf(" %d",&num);*/
        new->data = num;
        new->link = NULL;
        rear->link = new;
        rear = rear->link;
        pointer++;
    }
}
void Delete(void)
{
    if(front == NULL)
    {
        printf("Queue is already empty!\n");
    }
    else
    {
        struct node *delete = malloc(sizeof(struct node));
        printf("%d has been deleted!\n",front->data);
        delete = front;
        front = front->link;
        delete->link = NULL;
        free(delete);
        pointer--;
    }
}
void Display(void)
{
    if(front == NULL)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        struct node *p = malloc(sizeof(struct node));
        p = front;
        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->link;
        }
        printf("\n");
    }
}
void Search(void)
{
    if(front == NULL)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        int num;
        printf("Enter the Number: ");
        scanf(" %d",&num);
        struct node *pk = malloc(sizeof(struct node));
        pk = front;
        int node = 0;
        int found = 0;
        while(pk != NULL)
        {
            if(pk->data == num)
            {
                found = 1;
                printf("%d,node: %d,Address: %p\n",pk->data,node,pk);
                break;
            }
            else
            {
                pk = pk->link;
                node++;
            }
        }
        if(found == 0)
        {
            printf("The Number do not exists in the Queue\n");
        }
    }
}
void Peak(void)
{
    if(front == NULL)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        printf("%d\n",rear->data);
    }
}
void Func(void)
{
    printf(" -inst = insert \n");
    printf(" -delt = delete \n");
    printf(" -disp = display \n");
    printf(" -seek = search \n");
    printf(" -peak = top value \n");
    printf(" -exit = Exit \n");
}
