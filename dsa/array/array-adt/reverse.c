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
void Reverse(struct Array *arr)
{
for(int i=0;i<(arr->length)/2;i++)
{
swap(&arr->A[i],&arr->A[arr->length-i-1]);
}
}


int main()
{
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14},20,14};
    Display(arr); printf("\n");
    Reverse(&arr);
    printf("The reversed array is:\n");
    Display(arr);
    printf("\n");
    return 0;
}