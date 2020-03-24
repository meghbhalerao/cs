#include<stdio.h>

struct Rectangle
{
int l;
int b;
}

void initialize(struct Rectangle *r, int le, int br)
{
(*r).l = le;
(*r).b = br;
}
int area(struct Rectangle r)
{
return r.l*r.b
}
void changeLength(struct Rectangle *r, int nl)
{
r->l = nl
}



}
int main()
{
printf("Hello");
}
