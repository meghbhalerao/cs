// Formulation of recursion as a mathematical induction problem
// Hence formulate a recursive problem as a piecewise function as written in mathematical induction
// Hence if we have the mathematical definition of the function we can formulate it in any programming language
#include<stdio.h>

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}
int Isum(int n)
{
    int s = 0;
    int i;
    for(i=1;i<=n;i+=1)
    s+=i;
    return s;
}


int main()
{
    int r = sum(5);
    int s = Isum(5);
    printf("%d",r);
    printf("%d",s);

    return 0;
}