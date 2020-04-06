// Taylor series using recursive functions
#include<stdio.h>
// Remember that static variables/global variables in a program are initialized only once

double taylor(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {   
        r = taylor(x,n-1);
        // The updation of the values must be done after the function call is done - and then after the rollback happens
        p = p*x;
        f = f*n;
        return r + p/f;

    }
    
}

int main()
{
    printf("%lf\n",taylor(1,10));
    return 0;
}