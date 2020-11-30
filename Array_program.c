/* Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELE) at a given valid Position (POS)
d. Deleting an Element at a given valid Position (POS)
e. Exit
Support the program with functions for each of the above operations

Author: Shaheer Hasan */

#include<stdio.h>
int a[30], n;           //Global variables are initialized to 0 automatically

/*Function to create an Array of size N*/
void create()
{
    int i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }
}

/*Function to display array elements*/
void display()
{
    int i;
    if (n==0)
    {
        printf("\nNo elements to display.");
    }
    else
    {
        printf("\nThe elements are: ");
        printf("%d\t", a[i]);
    }
}

/*Function to insert element at a valid given position*/
void insert()
{
    int ele, pos, i;
    printf("\nEnter then element to be inserted: ");
    scanf("%d", &ele);
    printf("\nEnter the position where you want to insert the element: ");
    scanf("%d", &pos);

    if (pos<1 || pos>n)         //Checking validity of position
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];        //Shifting elements
        }
        a[pos-1]=ele;           //Inserting the element
        n++;                    //Incrementing the count of number of elements
    }
}

/*Function to delete an element from a valid position*/
void del()
{
    int pos, i;
    printf("\nEnter the position you want to delete: ");
    scanf("%d", &pos);

    if (pos<1 || pos>n)
    {
        printf("Invalid position!");
    }
    else
    {
        printf("\nElement deleted is: %d ", a[pos-1]);
        for(i=pos-1;i<n;i++)
        {
            a[i]=a[i+1];            //Shifting the elements
        }
        n--;                        //Decrementing the count of number of elements
    }
}

/*Main Function*/
int main()
{
    int ch;
    while(1);
    {
        printf("\nArray Operations:");
        printf("\n1.Create");
        printf("\n2.Display");
        printf("\n3.Insert");
        printf("\n4.Delete");
        printf("\n5.Exit");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: insert();
            break;
            case 4: del();
            break;
            case 5: return(0);
        }
    }
    return (0);
}
