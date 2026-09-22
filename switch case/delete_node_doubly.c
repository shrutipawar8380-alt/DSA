#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next,*prev;
};

struct node *START=NULL;

void insertLast()
{
    int value;
    struct node *p,*t;
    p=malloc(sizeof(struct node ));
    printf("Enter the node data :");
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

 void deleteFirst()
{
    struct node *t;
    if(START == NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t = START;
        START = t->next;
        t->next = NULL;
        START->prev = NULL;
        free(t);
    }
}

void delete_last()
{
    struct node *t=START;
    if (START==NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        if(t->prev==NULL && t->next==NULL)//check for single node 
        {
            printf("Delete node data:%d\n",t->data);
            free(t);
            START=NULL;
        }
        else
        {
            while(t->next!=NULL)
            {
                t=t->next;
            }
            printf("Delete node data:%d\n",t->data);
            t->prev->next=NULL;//t->prev goes to sec.last node  and then sec.last node's next will become NULL
            free(t);
        }
    }
    
}

void deleteAny()
{


    
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




int main()
{
    int i,size,ch;

    printf("Enter size of a list :");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        insertLast();
    }

    while(1)
    {
        printf("\n1.Delete at first\n2.Delete at any\n3.Delete at last\n4.DISPLAY\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    deleteFirst();
                    break;
            case 2:
                    //deleteAny();
                    break;
            case 3:
                     deleteLast();
                     break;
            case 4:
                     display();
                     break;
            case 5:
                     exit(0);                                   
        }
    }
}