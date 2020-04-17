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


void Union(struct Array *arr1, struct Array *arr2, struct Array *arr)
{
    int i=0,j=0,k=0;
    for(i=0,j=0;i<arr1->length && j<arr2->length;)
    {   
        if(arr1->A[i]<arr2->A[j])
        {
            arr->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else if(arr1->A[i]>arr2->A[j])
        {
            arr->A[k] = arr2->A[j];
            j++;
            k++;

        }
        else 
        {
            arr->A[k] = arr1->A[i];
            j++;
            k++;
            i++;

        }

    }

for(;i<arr1->length;i++)
{
    arr->A[k++] = arr1->A[i];
}
for(;j<arr2->length;j++)
{
    arr->A[k++] = arr2->A[i];
}
arr->length = k;

}

void Intersection(struct Array *arr1, struct Array *arr2, struct Array *arr)
{
    int i=0,j=0,k=0;
    for(i=0,j=0;i<arr1->length && j<arr2->length;)
    {   
        if(arr1->A[i]<arr2->A[j])
        {
        
            i++;
            

        }
        else if(arr1->A[i]>arr2->A[j])
        {
    
            j++;
           

        }
        else 
        {
            arr->A[k] = arr1->A[i];
            j++;
            k++;
            i++;

        }

    }


arr->length = k;

}

int main()
{
    struct Array arr1 = {{1,6,10,15,20},20,5};
    struct Array arr2 = {{3,6,7,10,20},20,5};
    struct Array arr = {{0,0,0,0,0,0,0,0,0,0},20,arr1.length+arr2.length};
    Union(&arr1,&arr2,&arr);
    Display(arr);
    printf("\n");
    Intersection(&arr1,&arr2,&arr);
    Display(arr);

    
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time