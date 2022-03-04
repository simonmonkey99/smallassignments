#include <iostream>

using namespace std;

void ExchangeNumber(int& A, int& B);

void swapman(int* num1, int* num2)
{

	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
}

int main()
{
	int a= 20;
	int b=4;
	swapman(&a, &b);
	cout <<" A is: " << a <<endl<< " B is: " << b << endl;
	ExchangeNumber(a, b);
	cout <<" A is: " << a <<endl<<" B is:" << b << endl;
	swap(a, b);
	cout << " A is: " << a <<endl << " B is: " << b << endl;


	return 0;

}

void ExchangeNumber(int& A, int& B)
{
	int tmp;
	tmp = A;
	A = B;
	B = tmp;


}

