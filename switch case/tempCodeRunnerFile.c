void selctionSort()
{
    struct node *p,*t,*min;
    int temp;
    if(START==NULL)
    {
        printf("Linked List is Empty");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            min=t;
            p=t->next;
            while(p!=NULL)
            {
                if(min->data > p->data)
                {
                    min = p;
                }
                p=p->next;

            }
            temp = t->data;
            t->data = min->data;
            min->data = temp;
            t = t->next;
        }
        printf("\nThe sorted linked list is :");
        display();
    }
}