#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Generate seed of random number!
	srand(time(0));
	//Generate a number between 1 and 100
	int randomNumber = rand() % 100 + 1;
	//Variables
	int tries = 0;
	int guess;
	char again;
	cout << "\tWelcome to Guess the Number\t" << endl;
	do 
	{
		cout << "Choose the Number (1-100) : ";
		cin >> guess;
		tries++;
		if (guess > randomNumber)
		{
			cout << "Arghh , it's too HIGH!" << endl;
		} else if (guess < randomNumber)
		{
			cout << "Uffff , it's too LOW!" << endl;
		}
		else
		{
			cout << "Congrats!! you made it in " << tries << " guess!" << endl;
		}

	} while (guess != randomNumber);
	cout << "ByeBye" << endl;

	system("Pause");
}