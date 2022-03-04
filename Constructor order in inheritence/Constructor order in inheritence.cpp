#include <iostream>
using namespace std;

class classA
{
public :
	classA()
	{
	cout << "constructor a"<<endl;
	}
	~classA()
	{
		cout << "Deconstructor a" << endl;
	}
};


class classB:public classA
{
public:
	classB()
	{
		cout << "constructor b" << endl;
	}
	~classB()
	{
		cout << "Deconstructor B" << endl;
	}

};
class classC:public classB
{
public :
	classC()
	{
		cout << "constructor c" << endl;
	}
	~classC()
	{
		cout << "Deconstructor C" << endl;
	}
};

int main()
{
	classC C;
	return 0;

}
