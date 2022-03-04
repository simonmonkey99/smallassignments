#include <iostream>

using namespace std;
void SortArr(int arr[],int ArrSize);
int main()
{

	int arr[]{ 46,35,75,24,69,35,420,1337 };
	int arrSize = size(arr);
	SortArr(arr, arrSize);
	int sum=0;
	for (int i = 0; i < arrSize; i++)
	{
		sum += arr[i];

	}
	
	cout << "min Value: " << arr[0]<<" max Value: "<< arr[size(arr)-1]<< " average value: " << sum / arrSize;
	


}
void SortArr(int arr[] , int ArrSize)
{

	for (int i = 1; i < ArrSize - 1; i++)
	{
		if (arr[i] < arr[i - 1])

		{
			int tmp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = tmp;
			i = 0;
		}
	}

	
	

}