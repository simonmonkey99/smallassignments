#include <iostream>
#include <stdlib.h>

using namespace std;

int generateRandomNumber(int nr);
int guesses;
int secretnumber;
int guessValue;
bool gameActive = true;

int main()
{
	
	while (gameActive == true)
	{
	secretnumber=generateRandomNumber(secretnumber);

	guesses = 0;
	cout << "Welcome to the guessing contest" << endl << endl;
	cout << "Instructions: " << "Guess the lucky number by entering a interger value between 1-15"<<endl;
	cout << secretnumber<<endl;
	cout << "Enter your guess: ";


	cin >> guessValue;
	
	while (guessValue !=secretnumber)
	{	
		if (guessValue == 0)
		{
			cout << "Invalid entry"<<endl;
			cout << "Enter your valid guess: "; 
			cin >> guessValue;
		}

		if (cin.fail())	{cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');}
		else if (guessValue > 15 || guessValue < 1)	{cin.clear();guessValue = 0;}
		else if (guessValue < 15 && guessValue>0){	cout << "Guess again"<<endl;cin >> guessValue;	guesses++;	}
	
	}	

	guesses++;
	
	if (secretnumber == guessValue)
	{
		system("CLS");

		cout << "You guessed the lucky number, Congratulations!!!" << endl << "amount of guesses: " << guesses<<endl;
		cout << "Do you want to play again?" << endl;
		cout << "1 for yes 0 for no "; cin >> gameActive;
				
	}		
	}

	return 0;

}
int generateRandomNumber(int secretnumber)
{
	srand(time(NULL));
	secretnumber = 0;
	
	secretnumber = rand() % 15 + 1;
	

	return secretnumber;
}

