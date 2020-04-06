// Again use the concept of mathematical induction for simple math problems
#include<stdio.h>
int power(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {   
        return power(m,n-1)*m;
    }
}

// More efficient way of doing the power function is by dividing the number's powe into half

int pow1(int m, int n)
{
    if(n==0)
    {
        return(1);
    }
    if(n%2==0)
    {
        return pow1(m*m,n/2);
    }
    else
    {
        return m*pow1(m*m,(n-1)/2);
    }
    
}

int main()
{
    int r = power(3,4);
    printf("%d\n",r);
    int t = pow1(4,11);
    printf("%d\n",t);
}
