// Mathemartical formulation of factorial of a number is : fact(n) = fact(n-1)*n
#include<stdio.h>
// If Negative value is given to the factorial then it will become an infinite loop and the stack memeory will overflow
int fact(int n)
{
    if(n==0)
        {
        return 1;
        }
    else
    {
        return fact(n-1)*n;
    }
    
}
int main()
{
    int r = fact(5);
    printf("%d",r);
    return 0;

}