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
    printf("ENter the node data :");
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
    printf("ENter the node data :");
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

void deleteLast()
{
    struct node *t;

    if(START == NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t = START;
        while(t->next->next != NULL)
        {
            t  = t->next;
        }
        t->next->prev = NULL;
        t->next=NULL;
        free(t->next);
    }
}
void display()
{
    struct node *t;
    if(START == NULL)
    {
        printf("The lIned List is Empty ");
    }
    else
    {
        t = START;
        while(t != NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

int findMax()
{
    struct node *p;
    int max;
    
    if(START == NULL)
    {
        printf(" The Linked List is Empty ");
    }
    else
    {
        p=START;
        max=p->data;
        while(p != NULL)
        {
            if(p->data > max)
            {
                max = p->data;
            }
            p = p->next;
        }
        printf("The maximum value in the Linked List is: %d", max);
    }
}

int findMin()
{
    int min;
    struct node *p;
    if(START == NULL)
    {
        printf("The Linked List is Empty...!!!!");
    }
    else
    {
        p=START;
        min=START->data;
        while(p!=NULL)
        {
            if(p->data < min)
            {
                min=p->data;
            }
            p=p->next;
        }
        printf("The minimum value in the Linked List is: %d", min);
    }
    
    
}

int  sumList()
{
    struct node *p;
    int sum=0;
    
    if(START == NULL)
    {
        printf("The list is Empty");
    }
    else 
    {
        p=START;
        while(p!=NULL)
        {
            sum=sum+p->data;
            p=p->next;
        }
    }
    return sum;


}

int length()
{
    struct node *p;
    int l=0;
    if(START == NULL)
    {
        printf("The List is Empty");
    }
    else
    {
        p=START;
        while(p!=NULL)
        {
            l++;
            p=p->next;
        }
    }
    return l;
}

int main()
{
        int i,size;
        printf("Enter the size of node :");
        scanf("%d",&size);
        for(i=1;i<=size;i++)
        {
            insertLast();

        }
        printf("The Linked List is :");
        display();

    main_menue:
    while(1)
    {
        printf("\n1. INSERTION \n2. DELETION\n3.TRAVERSAL\n4. DISPLAY\n5. EXIT");
        int ch;

        printf("Enter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            
                    while(1)
                    {
                        printf("\n(A). Insert at 1st position :");
                        printf("\n(B). Insert at Any position :");
                        printf("\n(C). Insert at Last position :");
                        printf("\n(D). Exit");
                        char choice;

                        printf("\nEnter your choice :");    
                        scanf("%c",&choice);
                        
                        switch(choice)
                        {
                            case 'A':
                                        insertFirst();
                                        break;
                            case 'B':
                                        //insertAny();
                                        break;
                            case 'C':
                                        insertLast();
                                        break;
                            case 'D':
                                        goto main_menue;
                                        break;
                        }
                    }
                    break;


            case 2:
                    while(1)    
                    {
                        printf("\n(A). Delete the first position node");
                        printf("\n(B). Delete the any position node");
                        printf("\n(C). Delete the last position node");
                        printf("\n(D). Exit");
                        char choice;
                        printf("\nEnter your choice :");    
                        scanf("%c",&choice);
                        
                        switch(choice)
                        {
                            case 'A':
                                        deleteFirst();
                                        break;
                            case 'B':
                                        //deleteAny();
                                        break;
                            case 'C':
                                       // deleteLast();
                                        break;
                            case 'D':
                                        goto main_menue;
                                        break;
                        }
                    }
                    break;

            case 3:
                    while(1)
                    {
                        printf("\n(A). Find the Maximum node");
                        printf("\n(B). Find the Minimum node");
                        printf("\n(C). Sum of all nodes");
                        printf("\n(D). Find the Middle node");
                        printf("\n(E). Length of Linked List");
                        printf("\n(F). Concatenate two linked list");
                        printf("\n(G). Reverse the linked list");
                        printf("\n(H). Linear Search in linked list");
                        printf("\n(I). Prime nodes from linked list");
                        printf("\n(J). Perfect nodes from linked list");
                        printf("\n(K). Palindrome nodes from linked list");
                        printf("\n(L). Bubble Sort in linked list");
                        printf("\n(M). Selection Sort in linked list");
                        printf("\n(N). Insertion Sort in linked list");
                        printf("\n(O). Exit");
                        char choice;    
                        printf("\nEnter your choice :");    
                        scanf("%c",&choice);

                        switch (choice) 
                        {
                            case 'A':
                                        findMax();
                                        break;  

                            case 'B':
                                        findMin();
                                        break;

                            case 'C':
                                        printf("The sum of nodes is : %d ",sumList());    

                            case 'D':
                                        //findMid();    
                                        break;  

                            case 'E':   
                                        printf("The Length of Linked List is %d ",length());    
                                        break;      

                            case 'F':
                                        //concat(); 

                            case 'G':
                                        //reverse();    
                                        break;

                            case 'H':
                                        //linearSearch();   
                                        break;

                            case 'I':
                                        //prime(); 
                                        break;


                            case 'J':
                                        //perfect();        
                                        break;

                            case 'K':
                                        //palindrome(); 
                                        break;

                            case 'L':
                                        //bubbleSort();

                                        break;

                            case 'M':       
                                        //selctionSort();
                                        break;  

                            case 'N':
                                        //insertionSort();
                                        break;  

                            case 'O':
                                        goto main_menue;
                                        break;

                        }
                        break;

                    }


            case 4:
                    display();
                    break;  


            case 5:
                    exit(0);
                    break;      
            

        }
    }
}

