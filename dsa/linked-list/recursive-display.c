#include<stdio.h>
#include<stdlib.h>

// Defining a structure for the elementary builfing block of a linked list which is a node - the difference betweeen linked list and other data structures is that the linked list is a dynamic data structure and hence the size of the linked list is not fixed but rather very much user dependent - here we can also make another observation that we define only a structure for a node in a linked list but not for the entire linked list - also the linked list is created in a heap except for the first pointer to the linked list which points to the first node and hence we can't physically see the linked list in our program since it is present in the heap and is connected via pointers
struct Node
{
    int data;
    struct Node *next;

}* first = NULL;

// Function for creating a linked list
void Create(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++)
    {    
        // now we want to create a new node temp - hence we make use of a varible t - to create a temporary node and then assign that node to be the last node 
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data =  A[i];
        // since as of now this is the last node in the linked list - since as of now nothing mode has been added after this - hence we set the next value as NULL in this temp variable
        t->next = NULL;
        // assigning the previous node's address column to the last node's address
        last->next = t;
        // setting the last node as the node which is added latest i.e. t
        last = t;

    }

}

// Displaying the linked list
void Display(struct Node* p)
{
    if(p!=NULL)
    {
        printf("%d ", p->data);
        Display(p->next);
    }
}


// Display reverse linked list using recursion - in the reverse order

void RDisplay(struct Node* p)
{
    if(p!=NULL)
    {   
        RDisplay(p->next);
        printf("%d ", p->data);

    }
}


int main()
{
    int A[] = {3,5,7,10,15};

    Create(A,5);

    // Passing the first pointer to the linked list
    Display(first);

    printf("\n");

    RDisplay(first);

    return 0;
}

