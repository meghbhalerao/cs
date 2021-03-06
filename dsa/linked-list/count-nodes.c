#include<stdio.h>
#include<stdlib.h>

// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

}* first = NULL;

// Function for creating a linked list using the pointer to the first node of the linked list and using the array given in the main function
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

// Here we are assuming and hence we are passing a pointer to a node of a linked list
int count(struct Node* ptr)
{
int ctr = 0;
while(ptr!=NULL)
{
    ctr+=1;
    ptr = ptr->next;
}
return ctr;
}
// recursive counting number of elements in the linked list
int RCount(struct Node* ptr)
{
    if(ptr!=NULL)
    {
        return RCount(ptr->next) + 1;
    }
    else
    {
        return 0;
    }
    
}

int R2Count(struct Node* ptr)
{
    if(ptr==NULL)
    {
        return 0;
    }
    else
    {
        return R2Count(ptr->next) + 1;
    }
}



int main()
{
    int A[] = {3,5,7,10,15};

    Create(A,5);

    // Passing the first pointer to the linked list
    Display(first);

    printf("\n");
    // counting and printing the number of elements in the linked list
    printf("The number of elements in the linked list are: %d",count(first));

  // counting and printing the number of elements in the linked list
    printf("\nThe number of elements in the linked list using recursive methods are: %d",RCount(first));

  // counting and printing the number of elements in the linked list
    printf("\nThe number of elements in the linked using second method of reusrion list are: %d",R2Count(first));
    

    return 0;
}

