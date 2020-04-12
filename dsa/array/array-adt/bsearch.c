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

int BinarySearch(struct Array arr, int key, int low, int high)
{
    int mid;
    while(high>=low)
    {
        mid = (high+low)/2;
        if (key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            high = mid - 1;

        }
        else if(key>arr.A[mid])
        {
            low = mid+1;

        }

    }
    return -1;
}


int RecursiveBinarySearch(struct Array arr, int key, int low, int high)
{
    int mid;
    if(high>=low)
    {
        mid = (high+low)/2;
        if (key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            return RecursiveBinarySearch(arr,key,low, mid-1);
        }
        else if(key>arr.A[mid])
        {
            return RecursiveBinarySearch(arr,key,mid+1, high);

        }

    }
    return -1;
}



int main()
{
    struct Array arr = {{2,3,5,6,7,8,10,13,34,56,78,90,100,201,2020},20,15};
    Display(arr); printf("\n");
    int idx = BinarySearch(arr,78,0,arr.length);
    printf("The element is found at: %d \n", idx);
    int bidx = RecursiveBinarySearch(arr,2020,0,arr.length);
    printf("The element is found at: %d \n", bidx);
    return 0;
}

// Sum of time taken by all possible cases divided by number of cases is the average case time