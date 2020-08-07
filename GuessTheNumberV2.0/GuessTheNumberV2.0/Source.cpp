#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
//Write	a	new	version	of	the	Guess	My	Number	program	in	which	the player	and	the	computer	switch	roles.	That	is,	the	player	picks	a	number and	the	computer	must	guess	what	it	is.



int main() {
	int tries = 0;
	int cpuNumber = 0;
	int userNumber;
	cout << "Welcome to GuessTheNumber" << endl;
	cout << "Please insert a number to guess (1-100): ";
	cin >> userNumber;
	while (cpuNumber != userNumber)
	{
		cpuNumber = rand() % 100 + 1;
		cout << "The CPU guess is : " << cpuNumber << endl;
		tries++;
			if (userNumber > cpuNumber)
			{
				cout << "Your guess was to LOW" << endl;
				cpuNumber + 1;
			}else if (userNumber < cpuNumber)
			{
				cout << "Your guess was to HIGH" << endl;
				cpuNumber - 1;
			}
			else if (userNumber == cpuNumber)
			{
				cout << "Congrats CPU you got it in " << tries << " guess!!" << endl;
			}
	}
	system("Pause");
}