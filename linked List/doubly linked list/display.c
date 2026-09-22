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

    p = malloc ( sizeof( struct node ) );
    printf("Enter the node Data :");
    scanf("%d",&value);
    p->data = value;
    p->next = NULL;

    if( START == NULL)
    {
        START=p;
    }
    else
    {
        t = START;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = p;
    }
}


void display()
{
    struct node *t;
    if(START== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START;
        printf("\nThe Linked List is : ");
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

int main()
{
    int n,i;
    printf("Enter the size of  node : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        insert();
    }
    display();
    


}