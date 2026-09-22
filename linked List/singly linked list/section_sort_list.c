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

void selctionSort()
{
    struct node *p,*t;
    int temp,min;
    if(START==NULL)
    {
        printf("Linked List is Empty");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            min=t->data;
            p=t->next;
            while(p!=NULL)
            {
                if(min > p->data)
                {
                    min = p->data;
                }
                p=p->next;

            }
            temp = t->data;
            t->data = min;
            min = temp;
            t = t->next;
    }
    printf("\nThe sorted linked list is :");
    display();
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
    selctionSort();
    return 0;
   
}


