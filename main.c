

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct node{
    int data;
    struct node *next;
};
void create_node(void);
void create_node(void);
void display(void);
void Insert_Begn(void);
void Insert_Betn(void);
void Insert_End(void);
void Delete_Begn(void);
void Delete_Betn(void);
void Delete_End(void);
void Search(void);
struct node *head = NULL;
struct node *temp = NULL;
int count = 0;
int main(void)
{
    int choice = '\0';
    printf("---------------- Linked Lists ------------------\n");
    printf("Press 1 for creating a list\n");
    printf("Press 2 for Displaying a list\n");
    printf("Press 3 for Inserting a node\n");
    printf("Press 4 for Deleting a node\n");
    printf("Press 5 for searching a node\n");
    printf("Press 6 for exit\n");
    printf("------------------------------------------------\n");
    while(choice != 6)
    {
        printf("Enter Your choice from the above:- ");
        scanf(" %d",&choice);
        switch(choice)
        {
            case 1:
                if(head == NULL)
                {
                    create_node();
                }
                else if(head != NULL)
                {
                    char op;
                    printf("Trying to create new list will rewrite the previous data\n");
                    printf("Are you Sure you want to continue(y/n):- ");
                    scanf(" %c",&op);
                    if(op == 'y' || op == 'Y')
                    {
                        create_node();
                    }
                    else
                    {
                        printf("Failed to create new list!\n");
                    }
                }
                break;
            case 2:
                display();
                break;
            case 3:
            {
                char opt[3];
                printf("-if for insert at beginning , -im for insert at the middile , -il for insert at the end\n");
                printf("Enter the command:- ");
                scanf(" %s",opt);
                if(strcmp(opt,"-if") == 0)
                {
                    Insert_Begn();
                }
                else if(strcmp(opt,"-im") == 0)
                {
                    Insert_Betn();
                }
                else if(strcmp(opt,"-il") == 0)
                {
                    Insert_End();
                }
                else
                {
                    printf("## Command not Found ##\n");
                }
                break;
            }
            case 4:
            {
                char opt2[3];
                printf("-df for Delete at beginning , -dm for Delete at the middile , -dl for Delete at the end\n");
                printf("Enter the command:- ");
                scanf(" %s",opt2);
                if(strcmp(opt2,"-df") == 0)
                {
                    Delete_Begn();
                }
                else if(strcmp(opt2,"-dm") == 0)
                {
                    Delete_Betn();
                }
                else if(strcmp(opt2,"-dl") == 0)
                {
                    Delete_End();
                }
                else
                {
                    printf("## Command not Found ##\n");
                }
                break;
            }
            case 5:
                Search();
                break;
            case 6:
                return 0;
                break;
            default:
                printf("Invalid choice!\n");
                exit(1);
        }
    }
}

void create_node(void)
{
    head = malloc(sizeof(struct node));
    temp = malloc(sizeof(struct node));
    temp = head;
    struct node *new = NULL;
    int num = '\0';
    printf("Enter the number:- ");
    scanf(" %d",&num);
    head->data = num;
    head->next = NULL;
    count++;
    char op = '\0';
    printf("want to add another node(y/n)?: ");
    scanf(" %c",&op);
    while(op == 'y' || op == 'Y')
    {
        new = malloc(sizeof(struct node));
        printf("Enter the number:- ");
        scanf(" %d",&num);
        new->data = num;
        temp->next = new;
        temp = temp->next;
        printf("want to continue(y/n)?: ");
        scanf(" %c",&op);
        count++;
    }
    temp = head;
}

void display(void)
{
    if(head == NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        printf("%d ",temp->data);
        while(temp->next != NULL)
        {
            temp = temp->next;
            printf("%d ",temp->data);
        }
        printf("\n");
        temp = head;
    }
}

void Insert_Begn(void)
{
    temp = head;
    int num;
    struct node *new_h = NULL;
    new_h = malloc(sizeof(struct node));
    printf("Enter the number:- ");
    scanf(" %d",&num);
    new_h->data = num;
    new_h->next = temp;
    head = new_h;
    printf("%d has been inserted at teh begining of the list!\n",new_h->data);
    temp = head;
    count++;
}

void Insert_Betn(void)
{
    temp = head;
    int num,pos;
    printf("Enter the Number:- ");
    scanf(" %d",&num);
    printf("Enter the Position:- ");
    scanf(" %d",&pos);
    if(pos > 1 && pos < count)
    {
        struct node *n = NULL;
        struct node *temp2 = NULL;
        temp2 = malloc(sizeof(struct node));
        temp2 = temp;
        n = malloc(sizeof(struct node));
        n->data = num;
        n->next = NULL;
        int i = 1;
        while(i != pos - 1)
        {
            temp = temp->next;
            temp2 = temp2->next;
            i++;
        }
        temp2 = temp2->next;
        n->next = temp2;
        temp->next = n;
        printf("%d has been inserted!\n",n->data);
        temp = head;
        count++;
    }
    else
    {
        printf("Cannot Insert Data at the Begining or End!\n");
    }
}

void Insert_End(void)
{
    temp = head;
    struct node *new_e = NULL;
    int num;
    printf("Enter the Number:- ");
    scanf(" %d",&num);
    new_e = malloc(sizeof(struct node));
    new_e->data = num;
    new_e->next = NULL;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_e;
    printf("%d has been inserted in the end of list!\n",new_e->data);
    temp = head;
    count++;
}

void Delete_Begn(void)
{
    if(head == NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        temp = head;
        printf("%d has has been deleted!\n",head->data);
        head = head->next;
        free(temp);
        temp = head;
        count--;
    }
}

void Delete_Betn(void)
{
    if(head == NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        temp = head;
        int pos;
        printf("Enter the position:- ");
        scanf(" %d",&pos);
        if(pos > 1 && pos < count)
        {
            int i = 1;
            while(i != pos - 1)
            {
                temp = temp->next;
                i++;
            }
            printf("%d has been deleted!\n",temp->next->data);
            temp->next = temp->next->next;
            temp = head;
            count--;
        }
        else
        {
            printf("This Function could only Delete element between pos 1 and %d!\n",count);
        }
    }
}

void Delete_End(void)
{
    if(head == NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        printf("%d has been deleted!\n",temp->next->data);
        temp->next = NULL;
        temp = head;
        count--;
    }
}

void Search(void)
{
    if(head == NULL)
    {
        printf("List is Empty!\n");
    }
    else
    {
        temp = head;
        int num,found = 0,i = 1;
        printf("Enter the Number:- ");
        scanf(" %d",&num);
        while(temp->next != NULL)
        {
            if(temp->data == num)
            {
                printf("Position:- %d,Number:-%d\n",i,temp->data);
                found = 1;
                break;
            }
            else
            {
                temp = temp->next;
                i++;
            }
        }
        if(found == 0)
        {
            printf("The Number %d does not exist in the list!\n",num);
        }
        temp = head;
    }
}



