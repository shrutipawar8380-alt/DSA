#include<stdio.h>
int main()
{
    int a[100],i,size,n,flage;
    printf("ENter the size of array:");
    scanf("%d",&size);
    printf("ENter %d elements:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nENter the element to search:\n");
    scanf("%d",&n);
    for(i=0;i<size;i++)
    {
        if(a[i]==n)
        {
            printf("Element is found at %d position ",i+1);
            flage=1;
            break;
        }
    }
    if(flage==0)
    {
        printf("Element is NOT found");
    }
    
}