// Here while searching in a linked list - we must keep in mind that we cannot reach to any element in the linked list simply - i.e we can only reach elements in linked lists by traversing the linked list - unlike an array where we can reach elements directly from indexing - code to improve search in linked list using transposition
#include<stdio.h>
#include<stdlib.h>
// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

};

// function to create a circular linked list - paramters are - the array, the array key where the head node should be pointing, and the head node which indicates the start of the linked list, and the number of elements in the array
struct Node* CreateCircular(int A[], int pos, int n)
{
struct Node* temp_first, *t, *indicator;
temp_first = (struct Node*)malloc(sizeof(struct Node));
temp_first->data = A[0];
temp_first->next = NULL;
indicator = temp_first;


for (int i = 1; i < n;i++)
{   
    // creating a standard linked list - later we append the head node
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data =  A[i];
    t->next = NULL;
    indicator->next = t;
    indicator = indicator->next;

}
// connecting the ends of the linked list of node
indicator->next = temp_first;
// going upto the head position where we want to be the reference node of the linked list
// defining another pointer to iterate through the linked list which is starting with the temp_first pointer which is already pointing at the start of the linked list - we must always make sure - espicially when using a linked list - never lose the index of the first pointer which points at the first element of the linked list - and then later we can free up the memories
struct Node* ptr = temp_first;
for(int i = 0; i < pos - 1; i++)
{
    ptr = ptr->next;
}
// setting this pointer to the next of the head node
struct Node* head_2 = (struct Node*)malloc(sizeof(struct Node));
head_2->next = ptr;

return head_2;
}

void DisplayCircular(struct Node* head)
{
struct Node *ptr = head->next;
do 
{
    printf("%d ", ptr->data);
    ptr = ptr->next;

}while(ptr!=head->next);

}

struct Node* Delete(struct Node* head, int delete_pos)
{
    // go to the particular element that you want to delete
    struct Node* ptr_ahead = head;
    struct Node* ptr_behind = head;
    struct Node *ptr = head;
    if(delete_pos!=1)
    {
    // move the ahead pointer to the node to be deleted
    for(int i = 0; i < delete_pos; i++)
    {
        ptr_ahead = ptr_ahead->next;
    }
    // now we have reached the element to  be deleted 
    // move the behind pointer to one node before the node to be deleted
    for(int i = 0; i < delete_pos-1; i++)
    {
        ptr_behind = ptr_behind->next;
    }
    // skipping the node to be deleted
    ptr_behind->next = ptr_ahead->next;
    }
    if(delete_pos ==1)
    {   
    // here call a function to find the length of the linked list - but here we use the length directly to avoid confusion - length of the circular LL
    int length = 4;
    for(int i=0;i<length;i++)
    {
        ptr_behind = ptr_behind->next;
    }
    // moving the ahead pointer to the necessary position
    ptr_ahead = ptr_ahead->next;
    ptr_behind->next = ptr_ahead->next;
    head = ptr_behind;
    }
return head;
}


struct Node* Insert(struct Node* head, int insert_pos, int val)
{
    // make the new node to be inserted and putting the value
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    // pointer which goes to the particular node
    struct Node* ptr = head;
    node->data = val;
    for(int i = 0;i<insert_pos-1;i++)
    {
        ptr = ptr->next;
    }
    node->next = ptr->next;
    ptr->next = node;
    
    return head;
}

// main function
int main()
{   // array to store value in a circular linked list
    int A_circular[] = {2,4,6,8};
    int len_array = 4;
    int head_pos = 2;
    struct Node *head;
    head = CreateCircular(A_circular,head_pos,len_array);  
    DisplayCircular(head);
    printf("\n");
    // function to delete linked list
    // which position to delete starting from head index - head index is 1
    int delete_pos = 2;
    struct Node *deleted_head = Delete(head,delete_pos);
    DisplayCircular(deleted_head);

    printf("\n");
    // part to insert in a circular linked list at a given position

    int insert_pos = 3;
    int num = -100;
    struct Node *inserted_head = Insert(deleted_head,insert_pos,num);
    DisplayCircular(inserted_head);
    return 0;
}

