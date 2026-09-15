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

void palindrome()
{
    int c=0;
    struct node *p,*t;
    if(START==NULL)
    {
        printf("The Linked List Empty..!!");
    }   
    else
    {
        copyList();
        reverse();
        t=START;
        p=START1;
        while(t!=NULL)
        {
            if(t->data != p->data)
            {
                c++;
            }
            p=p->next;
            t=t->next;

        }
        if(c==0)
        {
            printf("\nThe Linked List is Palindrome ");
        }
        else
        {
             printf("\nThe Linked List is NOT Palindrome ");
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
    palindrome();

}