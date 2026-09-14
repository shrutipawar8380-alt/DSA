
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL,*START2 = NULL;

void insert2()
{
    int value;
    struct node *p;

    p=malloc(sizeof(struct node));  //create dynamic memory block for new node
    printf("Enter the node data :"); // taking data from use to insert
    scanf("%d",&value);     //store the data in variable value
    p->data=value;          // store the value in data part of node
    p->next=NULL;           // store the address of next node as NULL

    if(START2 == NULL)      
    {
        START2=p;           //if the list is empty then make the new node as first node
    }
    else
    {
        p->next=START2; // 1st node store the address of 2nd node 
        START2=p;       // start store the adderess if 1st node 
    }

}
void display2()
{
    struct node *t;
    if(START2== NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        t=START2;           //here t points to 1st node
        while(t!=NULL)
        {
            printf("%d\t",t->data);         // node will print
            t=t->next;              // t store the address of next node
        }
    }
}

void insertFirst()
{
    int value;
    struct node *p;

    p=malloc(sizeof(struct node));        // p named dynamical memory block is created
    printf("Enter the node data :");     // take data from usere to insert
    scanf("%d",&value);                 // store the data in value named variable
    p->data = value;                    // store the value in data part of node 
    p->next = NULL;                     // store the address of next node as NULL

    if(START == NULL)
    {
        START = p;         //if the list is empty then make the new node as first node
    }
    else
    {
        p->next = START;       // 1st node store the address of 2nd node 
        START = p;          // start store the adderess if 1st node 

    }

}

void insertAny()
{
    int value,n,c=1;
    struct node *p,*t;
    p=malloc(sizeof(struct node));
    printf("Enter the position to insert node :");
    scanf("%d",&n);
    printf("Enter the data to insert :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;

    if(START == NULL)
    {
        START=p;
    }
    else 
    {
        t=START;
        while(c<n-1)
        {
            c++;
            t=t->next;
        }
        p->next=t->next;
        t->next=p;
    }
}

void insertLast()
{
    int value;
    struct node *p,*t;

    p = malloc ( sizeof( struct node ) );
    printf("Enter the node Data :");
    scanf("%d",&value);
    p->data = value;
    p->next = NULL;

    if( START == NULL)
    {
        START=p;
    }
    else
    {
        t = START;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = p;
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
        START = START->next;
        free(t);
    }
}

void deleteAny()
{
    int n,c=1;
    struct node *t,*p;
    
    if(START == NULL)
    {
        printf("The Linked List is Empty");
    }
    else
    {
        printf("Enter the position to delete node :");
        scanf("%d",&n);
        t = START;
        
        while(c<n-1)
        {
            c++;
            t = t->next;
        }
        p = t->next;
        t->next = p->next;
        free(p);
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
            t = t->next;
        }
        t->next = NULL;
        free(t->next);
    }
}

void display()
{
    struct node *p;
    
    if(START == NULL)
    {
        printf(" The Linked List is Empty ");
    }
    else
    {
        p=START;
        printf("The give Linked list is :");
        while(p != NULL)
        {
            printf("%d\t",p->data);
            p = p->next;
        }
    }

}

void findMax()
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

void findMin()
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

void linearSearch()
{
    int c=1,x,flag=0;
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
                flag=1;
                printf("%d is at %d position of list",x,c);
                break;
            }
            c++;
            t=t->next;
        }
        if(flag==0)
        {
            printf("%d is not found in the list",x);
        }
    }

}

void concat()
{
    struct node *t,*p;
    p=START;
    t=START2;

    while(p->next != NULL)
    {
        p=p->next;
    }
    p->next=t;
    printf("\nThe concatenated Linked List is : ");
    display();
    
}

void prime()
{
    struct node *t;
     if(START==NULL)
     {
        printf("The LInked List is empty ");

     }
     else
     {
        t=START;
        while(t!=NULL)
        {
            int c=0,i;
            for(i=1;i<=t->data;i++)
            {
                if(t->data % i==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d\t",t->data);
            }
            t=t->next;
        }

     }
}

void perfect()
{
    struct node *t;
     if(START==NULL)
     {
        printf("The Linked List is empty ");

     }
     else
     {
        t=START;
        while(t!=NULL)
        {
            int sum=0,i;
            for(i=1;i<t->data;i++)
            {
                if(t->data % i==0)
                {
                    sum=sum+i;
                }
            }
            if(sum==t->data)
            {
                printf("%d\t",t->data);
            }
            t=t->next;
        }

     }
}
int main()
{
    int i,size,ch,n2;
    char choice;
    printf("Enter the  size of Linked List :");
    scanf("%d",&size);

    for(i = 1; i <= size; i++)
    {
        insertLast();
    }
    main_menu:
    while(1)
    {  
        printf("-----*********** SINGLY LINKED LIST MENUE ************-------");
        printf("\n1. INSERTION \n2.DELETION \n3.TRANSVERSING \n4. DISPLAY \n5.EXIT");
        printf("\nEnter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    while(1)
                    {
                        printf("\n ---------************* INSERTION ***********----------");
                        printf("\n(A). Insert at first position");
                        printf("\n(B). Insert at any position");
                        printf("\n(C). Insert at Last position");
                        printf("\n(D). Exit");

                        printf("\nEnter your choice :");
                        scanf(" %c",&choice);

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
                                        goto main_menu;
                                        break;

                        }
                    }
                    break;
                
            case 2:
                    while(1)
                    {
                        printf("\n ---------************* DELETION ***********----------");
                        printf("\n(A). Delete the first position node");
                        printf("\n(B). Delete the node at any position");
                        printf("\n(C). Delete the node at last position ");
                        printf("\n(D). Exit");
                        printf("Enter your choice :");
                        scanf(" %c",&choice);

                        switch (choice)
                        {
                            case 'A':
                                        deleteFirst();
                                        break;
                            case 'B':
                                        deleteAny();
                                        break;

                            case 'C':
                                        deleteLast();
                                        break;

                            case 'D' :
                                        goto main_menu;
                                        break;
                        }
                    }
                    break;

            case 3:
                    while(1)
                    {
                        printf("\n ---------************* TRANSEVERSING ***********----------");
                        printf("\n(A). Find Maximum Node");
                        printf("\n(B). Find Minimum Node");
                        printf("\n(C). Find Sum of All Nodes");
                        printf("\n(D). Find Mid of the list");
                        printf("\n(E). Find Total Length of list");
                        printf("\n(F). Concatenate Two Linked List");
                        printf("\n(G). Reverse the Linked List");   
                        printf("\n(H). Linear Search");
                        printf("\n(I). Find Prime Nodes");
                        printf("\n(J). Find Perfect Nodes");
                        printf("\n(K). Find Palindrome Nodes"); 
                        printf("\n(L). Copy the Linked List");
                        printf("\n(M). Exit");
                        printf("\nEnter your choice :");
                        scanf(" %c",&choice);
                        switch (choice)
                        {
                            case 'A':
                                        findMax();
                                        break;
                            case 'B':
                                        findMin();
                                        break;

                            case 'C':
                                        
                                        printf("Sum is : %d",sumList());
                                        break;

                            case 'D':
                                        //findMid();    
                                        break;

                            case 'E':
                                        printf("Total Lenth of List is : %d",length());
                                        break;

                            case 'F':  
                                        
                                        printf("Enter the size of 2nd linked list :");
                                        scanf("%d",&n2); 
                                        for(i=1;i<=n2;i++)
                                        {
                                            insert2();
                                        }
                                        printf("1st Linked List is:");
                                        display();
                                        printf("\n2nd Linked List is :");
                                        display2();
                                        concat();
                                        break;

                            case 'G':
                                        reverse();
                                        break;

                            case 'H':
                                        linearSearch();
                                        break;

                            case 'I':
                                        prime();
                                        break;

                            case 'J':
                                        printf("\nPerfect nodes form Linked list:");
                                        perfect();
                                        break;

                            case 'K':
                                        //palindrome();
                                        break;

                            case 'L':
                                        //copyList();
                                        break;
                            
                            case 'M': 
                                        goto main_menu;
                                        break;
                        }
                    }
                    break;

            case 4:
                    display();
                    break;

            case 5:
                    exit(0);

        }

    }
}