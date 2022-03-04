#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void reverseCollection(string str);
int main()
{
	string collection= "rnqwerty";
	cout << collection<<endl;
	reverseCollection(collection);

	return 0;
}

void reverseCollection(string str)
{	
	char * chr= new char[str.length()+1];	

	strcpy_s(chr,str.size()+1,str.c_str());

	for (int i = str.length()-1; i >= 0; i--)
	{cout << chr[i];}
}