#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next,*prev;
};

struct node *START=NULL;

void insertFirst()
{
    int value;
    struct node *p;
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
        p->next = START;
        START->prev = p;
        START = p;  
        
        
    }
}

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
void insertAny()
{
    int value,pos,i=1;
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
        printf("Enter the position  to insert node :");
        scanf("%d",&pos);
        while(i<pos-1 && t->next != NULL)
        {
            t = t->next;
            i++;
        }
        p->next = t->next;
        t->next->prev = p;
        t->next = p;
        p->prev = t;
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
        printf("\n1.Insert at first\n2.Insert at any\n3.Insert at last\n4.DISPLAY\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    insertFirst();
                    break;
            case 2:
                    insertAny();
                    break;
            case 3:
                     insertLast();
                     break;
            case 4:
                     display();
                     break;
            case 5:
                     exit(0);                                   
        }
    }
}