#include <iostream>
using namespace std;

template <class T>
void func(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	string  a="skum", b="tomte";
	cout << a << b <<endl;
	func(a, b);
	cout << a << b;
}