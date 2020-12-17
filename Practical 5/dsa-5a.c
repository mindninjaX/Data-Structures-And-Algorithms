// Write a program to implement bubble sort.

#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("\nEnter the max no. of elements to sort: \n");
    scanf("%d",&n);
    printf("\nEnter the elements: \n");
    for(i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i<n;i++)
    for(j = i + 1; j < n; j++)
    {
        if(a[i] > a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nElements after sorting\n");
    for(i = 0; i< n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}