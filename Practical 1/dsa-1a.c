// Write a program to store the elements in 1-D array and perform the operations like 
// searching, sorting and reversing the elements.

#include<stdio.h>
#include<stdlib.h>

int a[20];
int m, n, p, val, i, j, key, pos, temp;

void create();
void display();
void insert();
void del();
void search();
void sort();

int main()
{
    int choice;
    do
    {
        printf("\n\n----------Menu----------\n\n");
        printf("01. Create\n");
        printf("02. Display\n");
        printf("03. Insert\n");
        printf("04. Delete\n");
        printf("05. Search\n");
        printf("06. Sort\n");
        printf("07. Exit\n");
        printf("------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: create();
                break;
            case 2: display();
                break;
            case 3: insert();
                break;
            case 4: del();
                break;
            case 5: search();
                break;
            case 6: sort();
                break;
            case 7: exit(0);
                break;
            default:
                printf("\nInvalid choice.\n");
                break;
        }
    }
    while (choice!=8);

    return 0;
}

void create()
{
    printf("\nEnter the size of an array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    display();
}

void display()
{
    printf("\nThe array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void insert()
{
    printf("\nEnter the position to add the element: ");
    scanf("%d",&pos);
    printf("\nEnter the element to insert in an array: ");
    scanf("%d",&val);
    if(pos > n)
    {
        printf("\nEnter valid position! i.e less than %d",n+1);
    }
    else
    {
        for(i = n-1; i >= pos; i--)
        {
            a[i+1] = a[i];
        }
        a[pos] = val;
        n = n + 1;
    }
    
    display();
}

void del()
{
    printf("\nEnter the position of element to be deleted: ");
    scanf("%d",&pos);
    val = a[pos];
    for(i = pos; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
    n = n - 1;
    printf("\nDeleted element is %d.\n",val);
    display();
}

void search()
{
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("\nThe element is present at position %d",i);
            break;
        }
    }
    if (i == n)
    {
        printf("\nSearch is unsuccessful.");
    }
}

void sort()
{
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting the array elements are:\n");
    display();
}