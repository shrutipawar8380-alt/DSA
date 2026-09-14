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

void insertAny()
{
    struct node *p,*t;
    int count=0,value,n;

    printf("Enter the positin to insert the node :");
    scanf("%d",&n);

    p=malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;

    if(START == NULL)
    {
        START=p;
    }
    else
    {
        t=START;
        while(t != NULL)
        {
            count++;
            if(n==1)
            {
                p->next=START;
                START=p;
            }
            if(count == (n-1))
            {
                p->next = t->next;
                t->next = p;
                break;

            }
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
    insertAny();
    displayList();

    
}