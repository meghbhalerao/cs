// more efficient method for taylor series expansion - the logic is taking stuff common recursively from the expansion - O(n) multiplications
// computation can be done at calling time itself
#include<stdio.h>
double e_loop(int x, int n)
{
    double s = 1;
    for(n>0;n--;)
    {
        s=1+(x/n)*s;
    }
    return s;
}

double e(int x, int n)
{
    static double s = 1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        s = 1 + (x/n)*s;
        return e(x,n-1);
    }
    
}

int main()
{
    printf("%lf",e(1,10));
}