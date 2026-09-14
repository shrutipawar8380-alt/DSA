#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    
};
struct node *START,*p;
void insertNode()
{
    int value;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the value to insert :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;
    if(START==NULL)
    {
        START=p;
    }
    else
    {
        p->next=START;
        START=p;
    }
}

void insertLast()
{
    struct node *t,*p;
    int value;

    p=malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;

    if(START==NULL)
    {
        START=p;
    }
    else
    {
        t=START;
        while(t->next != NULL)
        {
            t=t->next;
        }
        t->next=p;
    }
}
void displayList()
{
    struct node *t;
    if(START == NULL)
    {
        printf("The linked list is EMPTY");
    }
    else
    {
        printf("THe Linked List is :");
        t=START;
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }

    }
}
void main()
{
    int i,n;
    struct node p;
    printf("Enter the list size :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        insertNode();
    }
    displayList();
    insertLast();
    displayList();
    
}