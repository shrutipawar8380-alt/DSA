#include<stdio.h>
void main()
{
    int i,j,size,temp,min,a[100];
    printf("Enter the size of array:");
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
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
               min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("The sorted  array is :");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);

    }
}