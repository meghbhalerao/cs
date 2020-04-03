#include<iostream.h>
using namespace std
class Rectangle
{
	private:
		int length;
		int breadth:
	public:
		Rectangle(){length=breadth=1;}
		Rectangle(int l, int b);
		int area();
		int perimeter();
		int getLength(){return length;}
		void setLength(int l){length =l}
		~Rectangle();
};
Rectangle :: Rectangle(int l,int b)
{
length = l;
breadth = b;
}
int Rectangle :: area()
{
return length*breadth;
}
int Rectangle :: Rectangle()
{
return 2*(length+breadth)
}
Rectangle :: ~Rectangle()
{
}
int main()
{
Rectangle r(10,5);
cout<<r.area();
cout<<r.perimeter();
r.setLength(20);
cout<<r.getLength()
// Here the destructor is called automatically to destroy the object since here we are going outside the scope of the object, since the object is not accessible outside the main function
}

