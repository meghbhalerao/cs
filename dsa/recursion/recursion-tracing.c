/* General form of recursion:
A function calling itself is called as recursive function
type fun(params)
    if (some base condition)
    {
        fun(param)

    }


base condition is used for terminating the loop
since else the function will go in infinite loop

Example of recursion  code 
Recursive functions are traced in the form of a tree
*/
// Printing consicutive numbers using recursive functions
void fun1(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun1(n-1);
    }
}
// Tracing tree of a recursive function
// When a function call is terminated the control goes back to the previous call of the function
// Function call must be terinated
// So we have to back trace it 
void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        printf("%d",n);
    }
}
// one is calling phase of the function and other is the returning phase of the functinon
/* We dont think about this stuff much during normal
no recursive programming because the funtion does not call itself within itself
We must always make sure that the function is completed before going out of the program. We should not leave it untermonated 
It is something like nested function except for the fact that there is variable nesting according to the parameter n
And after a level of nesting is finished we get out of that nest and go to the outer nest
*/
// recursion has calling phase and also returing phase
// recursion will have ascending and descending statements
// loop will have only ascending phase while recursion will have both phases