#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int Search(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(arr->A[i]==key)
        {   
            swap(&arr->A[i-1],&arr->A[i]);
            return i;
        }
    }
    return -1;
}


int main()
{
    struct Array arr = {{2,3,4,78,6,5,9,8,7,626,27},20,11};
    Display(arr);
    int idx = Search(&arr,27);
    printf("\n");
    printf("%d",idx);
    printf("\n");
    Display(arr);
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time