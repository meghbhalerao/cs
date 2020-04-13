#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

bool isSorted(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
        {
            return false;
        }
    }
return true;
}

void Interchange(struct Array *arr)
{
    int i = 0, j = arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
        swap(&arr->A[i],&arr->A[j]);
        }
    }

}
int main()
{
    struct Array arr = {{2,3,5,6,7,8,10,13,34,56,78,90,100,201,2020},20,15};
    struct Array arr1 = {{-2,3,5,-7,8,10,13,-34,56,-90},20,10};
    Display(arr); printf("\n");
    bool result = isSorted(arr.A,arr.length);
    printf("The array is sorted %d \n",result);
    Interchange(&arr1);
    Display(arr1);
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time