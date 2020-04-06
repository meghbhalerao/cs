// Again use the concept of mathematical induction for simple math problems
#include<stdio.h>
int pow(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {   
        return pow(m,n-1)*m;
    }
}

// More efficient way of doing the power function is by dividing the number's powe into half

int pow2(int m, int n)
{
    if(n==0)
    {
        return(1);
    }
    if(n%2==0)
    {
        return pow2(m*m,n/2);
    }
    else
    {
        return m*pow2(m*m,(n-1)/2);
    }
    
}
