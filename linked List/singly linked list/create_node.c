#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void createNode()
{
    int value;
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the value:");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;
}
void main()
{
    createNode();
}