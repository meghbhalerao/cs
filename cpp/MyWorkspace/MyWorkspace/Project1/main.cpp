#include<iostream>

using namespace std;
// Cleaning the project helps since it removes unecessary object files which are binary files
// Cleaning when using multiple files is useful since the cpp compliler does not compile and make object files for files who already has object code
int main()
{
    int a;
    std::cout<<"Enter something";
    std::cout<<a;
    std::cin>>a;
    std::cout<<a;
    return 0;
}