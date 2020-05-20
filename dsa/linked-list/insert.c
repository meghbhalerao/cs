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

// code to insert element in the linked list given the position to insert and the value to be inserted in the linked list

void Insert(struct Node *p, int pos, int value)
{   
    // Create a new node to be inserted in the linked list
    struct Node* newNode;

    // always remember that we need to create a new node in heap - if we do it without using the malloc function - this means that we are creating the node in the stack and hence the heap pointer can not access the stack pointer - it will be weird - it will be like one node is in stack and the remaning nodes are in heap memory - hence always remember that only the first pointer to the linked list is in the stack and the remaning nodes are in heap memory

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if(pos==0)
    {   
        newNode->next = p;
        p = newNode;
    }
    else
    {   
        struct Node* ptr = p;

        // go till the position where you want to insert the new node
        for(int i=0;i<pos-1;i++)
        {
            ptr = ptr->next;
            
        }
        newNode->next = ptr->next;
        ptr->next = newNode;

    }

}


int main()
{
    int A[] = {3,5,7,10,15};

    Create(A,5);


    Insert(first,2,455);

    Display(first);


    return 0;
}

