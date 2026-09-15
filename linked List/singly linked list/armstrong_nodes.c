#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;

};
struct node *START;
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

void armstrong()
{
    struct node *p;
    int n;
    if(START==NULL)
    {
        printf("Linked List is Empty");
    }
    else
    {
        p=START;
        while(p!=NULL)
        {
            int r,sum=0,temp;
            temp=p->data;
            n=p->data;
            while(n>0)
            {
                r=n%10;
                sum=sum+(r*r*r);
                n=n/10;

            }
            if(temp==sum)
            {
                printf("%d\t",p->data);
            }
            p=p->next;

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
    printf("\nArmstrong nodes form Linked list:");
    armstrong();

}


