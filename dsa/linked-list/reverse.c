#include<stdio.h>
#include<stdlib.h>

// Defining a structure for the elementary builfing block of a linked list which is a node
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
        // assigning the previous node's address column tp the last node's address
        last->next = t;
        // setting the last node as the node which is added latest i.e. t
        last = t;

    }

}

// Displaying the linked list
void Display(struct Node* p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// Reversing a linked list using sliding pointer approach
void Reverse(struct Node* ptr, struct Node* ptr2, struct Node* ptr3)
{
     ptr2 =NULL;
     ptr3 =NULL;
    while(ptr!=NULL)
    {   
        // this is the part of the code to slide the pointer across the linked list
        ptr3 = ptr2;
        ptr2 = ptr;
        ptr = ptr->next;
        // This is the part of the code to reverse the linked list by assigning the next pointer to the previous pointer
        ptr2->next = ptr3;
    }
    first = ptr2;
}


void RecursiveReverse(struct Node* ptr, struct Node* ptr_next)
{
    if (ptr_next!=NULL)
    {
        RecursiveReverse(ptr_next,ptr_next->next);
        ptr_next->next = ptr;

    }
    else
    {
        first = ptr;
    }
}



int main()
{
    int A[] = {3,5,7,10,15};

    Create(A,5);

    // Passing the first pointer to the linked list
    Display(first);

    printf("\n");

    struct Node* ptr2 =NULL;
    struct Node* ptr3 =NULL;

    Reverse(first,ptr2,ptr3);

    Display(first);


    printf("\n");

    RecursiveReverse(NULL,first);

    Display(first);
    
    return 0;
}

