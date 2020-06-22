// Here while searching in a linked list - we must keep in mind that we cannot reach to any element in the linked list simply - i.e we can only reach elements in linked lists by traversing the linked list - unlike an array where we can reach elements directly from indexing - code to improve search in linked list using transposition
#include<stdio.h>
#include<stdlib.h>
// Defining a structure for the elementary builfing block of a linked list which is a node
struct Node
{
    int data;
    struct Node *next;

};


int isCircular(struct Node *first)
{   
    struct Node *p = first;
    struct Node *q = first;
    do
    {
        //move q by 2 element
        q = q->next;
        q = q->next;
        // move p by 1 element 
        p = p->next;
        if(q == NULL || p == NULL)
        {
            return 0;
        }

    }while(p != q);
    return 1;
}

// just creating a 4 element linked list with some loops
int main()
{   
    struct Node *ele1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ele2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ele3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ele4 = (struct Node *)malloc(sizeof(struct Node));
    // below we are assigning the data and the addresss and hened forming the linked list - making a circular ll with one loop
    ele1->data = 1;
    ele2->data = 2;
    ele3->data = 3;
    ele4->data = 4;
    ele1->next = ele2;
    ele2->next = ele3;
    ele3->next = ele4;
    ele4->next = NULL;
    int res = isCircular(ele1);
    printf("%d",res);
    return 0;
}

