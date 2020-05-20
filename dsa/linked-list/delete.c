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

// Here for simplicity purpose we assume that the index given is a proper number and not some weird thing - like greater than the length
void Delete(struct Node* ptr, int index)
{
    struct Node* ptr2;
    if(index==0)
    {
        ptr2 = ptr;
        ptr = ptr->next;
        free(ptr2);
    }
    else
    {
        for(int i = 0; i < index-1;i++)
        {
            ptr2 = ptr;
            ptr = ptr->next;
        }
        ptr2->next = ptr->next;
        free (ptr);
    }

}


int main()
{
    int A[] = {3,5,7,10,15};

    Create(A,5);

    // Passing the first pointer to the linked list
    Display(first);

    printf("\n");
    Delete(first,3);

    Display(first);

    return 0;
}

