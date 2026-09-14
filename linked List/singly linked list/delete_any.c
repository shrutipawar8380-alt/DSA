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
    struct node *t;

    t = malloc(sizeof(struct node));
    printf("Enter node data :");
    scanf("%d",&value);
    t->data = value;
    t->next = NULL;

    if(START == NULL)
    {
        START = t;
    }
    else
    {
        t->next = START;
        START = t;
    }
}

void display()
{
    struct node *t;
    if(START == NULL)
    {
        printf("\nLinked list is empty");
    }
    else
    {
        t = START;
        printf("\nList Is :");
        while(t != NULL)
        {
            printf("%d\t",t->data);
            t = t->next;
        }
    }
}

void deleteAny()
{
    struct node *t,*p;
    int n,c=1;

    printf("ENter the position to delete the node :");
    scanf("%d",&n);


    if(START == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        t=START;
        p=START;
        while(c < n/2)
        {
            c++;
            t=t->next;
        }
        p=t->next;
        t->next=p->next;
        printf("The deleted node data is %d ",p->data);
        p->next=NULL;
        free(p);
    }
}

int main()
{
    int size,i;

    printf("Enter size of a list :");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        insert();
    }
    display();
    deleteAny();
    display();


}