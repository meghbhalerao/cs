// Here while searching in a linked list - we must keep in mind that we cannot reach to any element in the linked list simply - i.e we can only reach elements in linked lists by traversing the linked list - unlike an array where we can reach elements directly from indexing - code to improve search in linked list using transposition
#include<stdio.h>
#include<stdlib.h>
// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

};
// Function for creating a linked list - parameters are
struct Node* Create(struct Node* first, int A[], int n)
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
return first;
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

int main()
{   
    int A[] = {2,4,6,8,13};
    struct Node *list1;
    list1  = Create(list1,A,5);
    return 0;
}

