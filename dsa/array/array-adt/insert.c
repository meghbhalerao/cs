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

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++] = x;
}


void Insert(struct Array *arr,int x, int idx)
{   
    int i;
    if(arr->length<arr->size)
    {
        // Add your insert code here
        for(i=arr->length;i>idx;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[idx]=x;
        arr->length++;
    }
}
void Delete(struct Array *arr,int idx)
{   
    int i;
    if(idx>=0 && arr->length<arr->size)
    {
        // Add your delete code here
        for(i=idx;i<arr->length-1;i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},20,5};
    Append(&arr,10);
    Display(arr);
    printf("\n");
    Insert(&arr,272662,3);
    Display(arr);
    Delete(&arr,4);
    printf("\n");
    Display(arr);
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time