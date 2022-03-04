#include <iostream>
using namespace std;
string palindrome(string str);
int main()
{

	cout <<palindrome("boob");
	return 0;

}
string palindrome(string str)
{
	
	char* chr = new char[str.length() + 1];

	strcpy_s(chr, str.size() + 1, str.c_str());

	int j = str.length()-1;
	int i = 0;
	while ( i < str.size())
	{
		cout << chr[i] << endl;
		cout <<chr[j]<<endl;
		if (chr[i] == chr[j])
		{

			i++;
			j--;
		}
		else if (chr[i] != chr[j])
		{

			return str + " is not a palindrome";
		}
		



	}
	return str + " is a palindrome";
}