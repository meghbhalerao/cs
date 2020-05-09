#include<iostream>
using namespace std;

// simulating a linker error here

// the linker cant ind the variable x
extern int x;

int main()
{
    std::cout<<"Hello";
    std::cout<<x;
    return 0;
}