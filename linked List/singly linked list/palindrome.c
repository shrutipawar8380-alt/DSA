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
void copy()
{
    struct node *t,*p;
    if(START== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START;
        START1=p;
        while(t!=NULL)
        {
             p->data=t->data;
             t=t->next;
             p=p->next;

        }
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

void cpy_display()
{
    struct node *t;
    if(START1== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START1;
        printf("\nThe Linked List is : ");
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

void reverse()
{
    struct node *p,*q,*m;
    int temp,i=1,c=1;

    if(START==NULL)
    {
        printf("The list is Empty");
    }
    else
    {
        
        q=START;
        p=START;
        while(q->next!=NULL)
        {
            c++;
            q=q->next;
        }
        while(i<=c/2)
        {
            m=START;
            while(m->next != q)
            {
                m=m->next;
            }
            temp=p->data;
            p->data=q->data;
            q->data =temp;

            q=m;
            i++;
            p=p->next;
        }
        printf("\nThe Linked List is Reversed");
        display();
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
    printf("\n THe Reverse LIst is :");
    //reverse();
    copy();
    cpy_display();


}