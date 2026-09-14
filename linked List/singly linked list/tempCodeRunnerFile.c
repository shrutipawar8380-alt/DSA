void insertLast()
{
    int value;
    struct node *t,*p;
    p=malloc(sizeof(struct node));
    printf("ENter the node data :");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;
    if(START == NULL)
    {
        START = p;
    }
    else
    {
        t=START;
        while(t != NULL)
        {
            t=t->next;
            if(t->next == NULL)
            {
                t->next=p;
            }
        }
    }

}