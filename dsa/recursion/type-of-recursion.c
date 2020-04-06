/* Tail recursion is better to be converted to a loop - since space complexity is better in loop
 */
// Head recursion
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        // some other statements here
        // but first statement is always the function call
    }
}

void fun(int n)
{
    if (n>0)
    {
        fun(n-1);
        printf("%d",n);

    }
}
// All ops happen at returning time 
// cant convert to loops directly - some additional variables need to be used
// Linear recursion - function calling itself only one time
// Tree recursion - calling itself more than one time - then it is tree recursion


void fun(int n)
{
    if(n>0)
    {   // total 15 function calls 
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}
// Tracing the tree function can be analysed as a tree
// max size of stack = 4

// Time complezity of tree recursion = O(2^n)
// Space complexity = O(n)
