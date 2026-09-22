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

void deleteFirst()
{
    struct node *t;
    if(START == NULL)
    {
        printf("\nLinked list is empty");
    }
    else
    {
        t = START;
        START = t->next;
        printf("\nDeleted Node Is %d",t->data);
        t->next = NULL;
        free(t);
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

void countNodes()
{
    int count=0;
    struct node *t;

    if(START == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
       t = START;
       while(t != NULL)
       {
          count++;
          t = t->next;
       }
       printf("TOTAL NODES = %d",count);
    }
}


int main()
{
    int i,size,ch;

    printf("Enter size of a list :");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        insert();
    }

    while(1)
    {
        printf("\n1.INSERT\t2.DELETE\t3.DISPLAY\t4.Count\t5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    insert();
                    break;
            case 2:
                    deleteFirst();
                    break;
            case 3:
                     display();
                     break;
            case 4:
                     countNodes();
                     break;
            case 5:
                     exit(0);                                   
        }
    }
}