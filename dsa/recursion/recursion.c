#include<stdio.h>
// This is a global variable
int y = 0;
void fun(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1);
    }
}
// Here the print statement is after the function call hence reverse order of printing - as a stack
void fun1(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d\n",n);

    }
}
int fun3(int n)
{   
    static int x = 0;
    if(n>0)
    {   
        x++;
        return fun3(n-1)+n+x;
    }
return 0;
}

int main()
{
    int x = 3;
    fun(x);
    fun1(x);
    int a = 5;
    int out = fun3(5);
    printf("%d",out);
    return 0;
}
// concept of static variables in recursion

//static vatiable x only one copy is created in thr code section of the memory
// created only once in the code section and it is not initialized again and again
//  n has its own value in each call but x has the same value 5 which is utilized by all
// Even if x is created outside - i.e a global variable
// Best way think about recursion is like mathematical induction with a suitable seed
