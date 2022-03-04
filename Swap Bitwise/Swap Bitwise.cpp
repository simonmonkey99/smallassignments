#include <iostream>

using namespace std;
void swapbitwise(int a, int b);
int main()
{
	int a, b;
	cout << "Enter first number";
	cin >> a;
	cout << "Enter second number";
	cin >> b;



	
	//swapbitwise(a,  b);


	
	
	return 0;

}

void swapbitwise(int a, int b)
{
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "After Swapping: a =" << a << ", b=" << b;

}