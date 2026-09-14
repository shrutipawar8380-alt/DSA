#include<stdio.h>
void main()
{
    int i,j,size,temp,a[100];
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
        for(j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted  array is :");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);

    }
}