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



void DuplicateDelete(struct Node* ptr)
{   
    struct Node* ptr_lead =  ptr->next;
    while(ptr_lead!=NULL)
    {   
        if(ptr->data!=ptr_lead->data)
        {
            ptr = ptr_lead;
            ptr_lead = ptr_lead->next;
        }
        else
        {
            ptr->next = ptr_lead->next;
            free(ptr_lead);
            ptr_lead = ptr->next;
        }
    }

}



int main()
{
    int A[] = {3,3,5,5,5,7,7,7,10,10,10,15,15,15,15,15,15,15};

    Create(A,18);

    // Passing the first pointer to the linked list
    Display(first);

    DeleteRepeated(first);

    printf("\n");

    Display(first);
    return 0;
}

