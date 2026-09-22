#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next,*prev;
};
 struct node *START=NULL;
void insert()
{
    int value;
    struct node *p,*t;
    p=malloc(sizeof(struct node ));
    printf("ENter the node data :");
    scanf("%d",&value);
     p->data=value;
     p->next=NULL;
     p->prev=NULL;

     if(START == NULL)
     {
        START = p;
     }
     else
     {
        t = START;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = p;
        p->prev = t;
    }
}

display()
{
    struct node *t;
    if(START == NULL)
    {
        printf("The lIned List is Empty ");
    }
    else
    {
        t = START;
        while(t != NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

int main()
{
    int i,size;
    printf("Enter the size ofc node :");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        insert();

    }
    printf("The Linked List is :");
    display();
}

