#include <iostream>
using namespace std;

template <typename T>
void compare(T a, T b)
{
	cout << ((a > b) ? a : b) << "is greater than: " << ((a < b) ? a : b)<<endl;
	
}
int main()
{
	int a = 67, b = 477,c;
	compare(a, b);

	
	return 0;
}