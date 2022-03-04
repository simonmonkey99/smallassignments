#include <iostream>
using namespace std;
void GetBit(int number);
void SetBit(int number);
int main()
{
	int num = 45;
		

		GetBit(num);
		//SetBit(num);
	
}
void GetBit(int number)
{
	int n;
	cout << "Enter bit number you wish to obtain\n";

	cin >> n;

	cout << "bit " << n << " is set to: " << (1 & (number >> (n - 1)));

}
void SetBit(int number)
{
	int bitPos;
	cout << "enter bit you wanna set";
	cin >> bitPos;

	number |= 1UL << bitPos;

	cout << "Number is now " << number;

}
