#include <iostream>

using namespace std;
string ArithmicProgression(int numbers[], int size);
int main()
{
	int arr[4]{ 2,4,6,8 };
	int arrSize = size(arr);
	ArithmicProgression(arr,arrSize);
	return 0;
}

string ArithmicProgression(int numbers[],int size)
{
	int difference=0;
	
	for (int i = 1; i < size; i++)
	{
		cout << numbers[i]<<endl;
		int temp = difference;
		difference = numbers[i] - numbers[i - 1];
			if (difference != temp && i > 1)
			{
				
				return "Series has not arithmetic progression. ";

			}


	}
	return "Series has arithmetic progression. ";
}