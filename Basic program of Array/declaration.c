#include<stdio.h>
main()
{
    int a[20],i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the %d elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("The given array is :");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }

}