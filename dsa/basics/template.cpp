#include<stdio.h>

class Rectangle
{
private:
    int l;
    int b;
// functions are meant for that class/structure - constructor having same name as the class
Rectangle(int le, int br)
{
l = le;
b = br;
}
int area()
{
return l*b;
}
void changeLength(int nl)
{
l = nl;
}
};

int main()
{
Rectangle r;
r.initialize(5,10);
int a = r.area();
r.changeLength(20);
}
