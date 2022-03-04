#include <iostream>

using namespace std;

int arr[]{ 1,3,5,7,8 };
int LinearSearch(int number);
int main()
{
	cout<<LinearSearch(7);
	return 0;
}
int LinearSearch(int number)
{
	for (int i = 0; i < size(arr); i++)
	{

		if (arr[i] == number)
		{

			return i;

		}

	}

	return -1;
}