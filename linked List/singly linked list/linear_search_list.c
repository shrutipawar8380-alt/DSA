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

void linearSearch()
{
    int c=1,x;
    printf("Enter the data to search :");
    scanf("%d",&x);
    struct node *t;
    if(START== NULL)
    {
        printf("\nThe Linked List is Empty");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            if(t->data == x)
            {
                printf("%d is at %d position of list",x,c);
                break;
            }
            c++;
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
    linearSearch();


}