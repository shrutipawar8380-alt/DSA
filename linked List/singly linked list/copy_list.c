#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

};
struct node *START=NULL,*START1=NULL;

void insert()
{
    int value;
    struct node *p;

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
void display1()
{
    struct node *t;
    if(START1== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START1;
        printf("\nThe  Copied Linked List is : ");
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

void copyList()
{
    struct node *p,*t,*last = NULL;

    if(START==NULL)
    {
        printf("The list is Empty");
    }
    else
    {
        t=START;
        START1=NULL;
        while(t!=NULL)
        {
            p=malloc(sizeof(struct node));
            
            p->data = t->data;
            p->next = NULL;
            if(START1 == NULL)
            {
                START1 = p;
            }
            else
            {
                last->next = p;
            }

            last = p;
            t = t->next;
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
    copyList();
    display1();


}