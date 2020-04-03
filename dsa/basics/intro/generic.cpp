template<class T>
class Arithmetic
{
	private:
		T a;
		T b;
	public:
		Arithmetic(T a,T b);
		T add();
		T sub();

}
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
// somthing like self in python
this->a = a;
this-> = b;
}
template <class T>
T Arithmeric<T>::add()
{
T c;
c=a+b;
return c;
}
template <class T>
int Arithmetic<T>::sub()
{
return a-b;
}
int main()
{
Arithmetic<int> ar(10,5);
cout<<ar.add();
Arithmetic<float> ar1(2.5,1.32);
cout<<ar1.add();
}
