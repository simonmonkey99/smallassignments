#include < iostream>
using namespace std;
void numberOfLetters(string str);
void numberOfCharacters(string str);
int main()
{
	string text;
	cin >> text;
	//numberOfCharacters(text);
	numberOfLetters(text);
	return 0;
}
void numberOfCharacters(string str)
{
	char table[2][25];

	for (int k = 0; k < 25; k++)
	{
		for (int l = 0; l < 2;l++)
		{
			table[l][k] = '0';

		}

	}



	


	
	for (int i = 0; i < str.size(); i++)
	{
			for (int j = 65; j < 90; j++)
			{
				
				if (toupper(str[i]) ==j)
				{
					int tmp = (int)table[1][j - 65];
					tmp++;
					table[1][j - 65] = (char)tmp;
					table[0][j - 65] = (char)j;

				}
			
				
			}
		
		
	}

	
	for (int n = 0; n < 25; n++)
	{
		for (int m = 0; m < 2; m++)
		{
			if (table[1][n] != '0')
			{
				cout << table[m][n] << " ";
			}
			
		}
		
		cout << endl;
	}
	

}

void numberOfLetters(string str)
{
	
	int length=1;


	
	for (int i = 0; i < str.length()-1; i++)
	{
		int num=0;

		for (int j = 0; j < str.length()-1; j++)
		{
		
			if (str[i] == str[j])
			{

				num++;
			}
			if (j == str.length() - 1)
			{

				cout << str[i] << " :" << num;
				str.erase(remove(str.begin(), str.end(), str[i]));

			}
		}
		
		


	}


}