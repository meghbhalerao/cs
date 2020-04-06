// Can also be simply done using factorials
// Pascals traiangle for getting coefficients of a binomial expansion 
// Pascals triangle can be obtained by recursive addition of using pascals traingles
// Pascals traingle is a beautiful example of recursion - also is in the tree format - the method how all recursive functions are traced
#include<stdio.h>
int nCr(int n, int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else
    {
        return nCr(n-1,r) + nCr(n-1,r-1);
    }
    

}
int main()
{
    printf("%d",nCr(6,3));
    return 0;
}