#include<stdio.h>
#include<stdlib.h>
// fundamental structure of the node in a doubly linked list - has connection to the next node and the previous node
struct Node 
{
struct Node *prev;
int data;
struct Node *next;
};
// creating the doubly linked list 0 - returns the head pointer to the doubly linked list
struct Node* Create(int A[], int n)
{
struct Node *first;
struct Node *indicator;
struct Node *indicator_prev;
struct Node *temp;
// special assignment for the initial node
temp = (struct Node*)malloc(sizeof(struct Node));
first = temp;
indicator = first;
first->prev = NULL;
first->data = A[0];
first->next = NULL;

for(int i=1;i<n;i++)
{   
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = A[i];
    temp->next = NULL;
    temp->prev = indicator;
    indicator->next = temp;
    indicator = indicator->next;

}
return first;
}
// function for inserting in a linked list at a given pos
struct Node* Insert(struct Node* first, int val, int pos)
{
    struct Node *ptr = first;
    // going to the required position in the linked list
    for(int i=0;i<pos;i++)
    {
    ptr =  ptr->next;
    }
    struct Node *ptr_prev = ptr->prev;
    // creating the node to inserted
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    // doing the inserting steps
    temp->data = val;
    ptr_prev->next = temp;
    temp->prev = ptr_prev;
    ptr->prev = temp;
    temp->next = ptr;

    return first;
}

// function for deleting from doubly linked list

struct Node* Delete(struct Node* first, int pos)
{
    struct Node *ptr = first;
    // going to the required position in the linked list
    for(int i=0;i<=pos;i++)
    {
    ptr =  ptr->next;
    }
    struct Node *ptr_prev = ptr->prev;
    ptr_prev = ptr_prev->prev;

    // skipping the node to be deleted
    ptr_prev->next = ptr;
    ptr->prev = ptr_prev;
    return first;
}



// display the doubly linked list
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
int A[] = {1,2,3,4};
int length = 4;
struct Node* first = Create(A, length);
Display(first);
printf("\n");
int pos = 2;
int val = -100;
first = Insert(first,val,pos);
Display(first);
printf("\n");
int index = 2;
first = Delete(first,index);
Display(first);
printf("\n");
}







