#include<stdio.h>
#include<stdlib.h>

// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

}* first,*last = NULL;

// Displaying the linked list
void Display(struct Node* p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// code to insert element in the linked list always at the last position

void InsertLast(struct Node *ptr, int value)
{   
    // Create a new node to be inserted in the linked list
    struct Node* newNode;

    // always remember that we need to create a new node in heap - if we do it without using the malloc function - this means that we are creating the node in the stack and hence the heap pointer can not access the stack pointer - it will be weird - it will be like one node is in stack and the remaning nodes are in heap memory - hence always remember that only the first pointer to the linked list is in the stack and the remaning nodes are in heap memory
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(ptr == NULL)
    {
        ptr = last = newNode;
        
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }

}


int main()
{
    int A[] = {3,5,7,10,15};
    // Creating a linked list using insert last function
    InsertLast(first,8);
    InsertLast(first,8);
    Display(first);


    return 0;
}

