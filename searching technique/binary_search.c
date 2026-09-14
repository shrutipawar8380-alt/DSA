#include<stdio.h>
void main()
{
    int a[100],i,j,x, m,l,u,size,c=0;
    printf("ENter the size of array:");
    scanf("%d",&size);
    printf("Enter the %d elements :",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is :");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);

    }
    printf("ENter the vatlue to search :");
    scanf("%d",&x);
    l=0;
    u=size-1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(a[m]==x)
        {
            printf("Element is found at %d position ",m+1);
            c++;
            break;
        }
        else if(a[m] < x)
        {
            l=m+1;
        }
        else
        {
            u=m-1;
        }
    }
}