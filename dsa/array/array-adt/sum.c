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

int RecursiveSum(int A[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return A[n] + RecursiveSum(A,n-1);
    }
}
int main()
{
    struct Array arr = {{2,3,5,6,7,8,10,13,34,56,78,90,100,201,2020},20,15};
    Display(arr); printf("\n");
    int sum = RecursiveSum(arr.A,arr.length);
    printf("Sum of elements in the array is %d", sum);
    printf("\n");
    return 0;
}