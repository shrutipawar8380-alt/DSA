#include<stdio.h>
void main()
{
    int i,j,size,key,a[100];
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
    for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("The sorted  array is :");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);

    }
}