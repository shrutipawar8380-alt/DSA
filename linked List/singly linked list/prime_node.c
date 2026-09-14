#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *START=NULL;
void insert()
{
    int value;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("ENter the node data :");
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

void prime()
{
    struct node *t;
     if(START==NULL)
     {
        printf("The LInked List is empty ");

     }
     else
     {
        t=START;
        while(t!=NULL)
        {
            int c=0,i;
            for(i=1;i<t->next;i++)
            {
                if(t->data % i==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d\t",t->data);
            }
            t=t->next;
        }

     }
}

int main()
{
    int i,size;
    printf("Enter the size of List :");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        insert();
    }

    printf("The linked List is :");
    display();
    printf("\nPrime nodes form Linked list:");
    prime();

}


