#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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

void Merge(struct Array *arr1, struct Array *arr2, struct Array *arr)
{
    int i=0,j=0,k=0;
    for(i=0,j=0;i<arr1->length || j<arr2->length;)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else
        {
            arr->A[k] = arr2->A[j];
            j++;
            k++;

        }

    }

}

int main()
{
    struct Array arr1 = {{1,6,10,16,20},20,5};
    struct Array arr2 = {{2,4,6,8,10},20,5};
    struct Array arr = {{0,0,0,0,0,0,0,0,0,0},20,10};
    Merge(&arr1,&arr2,&arr);
    Display(arr);
    
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time