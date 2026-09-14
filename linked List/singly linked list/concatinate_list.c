#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

};
struct node *START1=NULL,*START2=NULL;

void insert1()
{
    int value;
    struct node *p;

    p=malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;

    if(START1 == NULL)
    {
        START1=p;
    }
    else
    {
        p->next=START1;
        START1=p;
    }

}

void insert2()
{
    int value;
    struct node *p;

    p=malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;

    if(START2 == NULL)
    {
        START2=p;
    }
    else
    {
        p->next=START2;
        START2=p;
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
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}
void display2()
{
    struct node *t;
    if(START2== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START2;
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}
void concat()
{
    struct node *t,*p;
    p=START1;
    t=START2;

    while(p->next != NULL)
    {
        p=p->next;
    }
    p->next=t;
    
}

int main()
{
    int m,n,i;
    printf("Enter the size of 1st node : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        insert1();
    }

    printf("Enter the size of 2nd node : ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        insert2();
    }
    printf("\n 1st List is :");
    display1();
    printf("\n 2nd List is :");
    display2();
    concat();
    printf("\nThe concatenated Linked List is : ");
    display1();




    

}