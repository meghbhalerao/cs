#include<iostream.h>
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

