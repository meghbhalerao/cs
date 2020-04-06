// Functions for fibanacci series - using recursive and non recursive methods
// Recursion tree can be drawn for a fibonacci by recursion methods
// O(2^n) - recursive methods for fibanacci series - since it goes in a tree like fashion
// Excessive recursive function - since it calls itself multiple times for the same value
// We need to save the values of the fibonacci sequence which are called repeatedly
/* Hence we define a static array to handle this 
We define a fibonacci array which has fibonacci values till the desired value n
This method will prevent us in making redundant calls to the function values whos o/p we already know  
This will reduce the time complexity to O(n)
Reduction in time is because of memoization - storing the results of the function call to avoid excess calls
*/
// Function using memoization
# include<stdio.h>
int F[50];
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }

}
int mfib(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {   // call the function only when that value is unknown
        if(F[n-2]==-1)
        {
            F[n-2] = mfib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1] = mfib(n-1);
        }
       return F[n-2] + F[n-1];
    }

}



int main()
{
int i;
for(i=0;i<50;i++)
{
    F[i] = -1;
}
    int r = mfib(20);
    printf("%d",r);
}