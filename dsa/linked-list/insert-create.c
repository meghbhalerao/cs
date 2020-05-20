#include<stdio.h>
#include<stdlib.h>

// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

};
// Declaring the global variables here
struct Node *first = NULL;
struct Node *last = NULL;

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

void InsertLast(struct Node** first,int value)
{   
    // Create a new node to be inserted in the linked list
    struct Node* newNode;

    // creating a new node in heap
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(*first == NULL)
    {
        *first = newNode;
        last = newNode;
        
    }
    
    else
    {   

        last->next = newNode;
        last = newNode;
    }

}

int main()
{
    // Creating a linked list using insert last function
    InsertLast(&first,8);
    InsertLast(&first,9);
    Display(first);
    
    return 0;
}

