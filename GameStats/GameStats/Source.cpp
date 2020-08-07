#include <iostream>
#include <string>
using namespace std;
//Global Variables
int score;
double Distance;
char playAgain = 'y';
bool ShieldsUp = true;
short lives, alienskilled;
int bonus;
double engineTemp;
int fuel;
int main() {
	Distance = 1200.72;
	lives = 3;
	alienskilled = 10;
	engineTemp = 6544.22;
	bonus = alienskilled;
	score = bonus * 10;

	cout << "Score : " << score << endl;
	cout << "Distance : " << Distance << endl;
	cout << "PlayAgain ? :" << playAgain << endl;
	cout << "Lives : " << lives << endl;
	cout << "Aliens killed : " << alienskilled << endl;
	cout << "Engine Temps : " << engineTemp << endl;
	cout << "How much fuel ? : ";
	cin >> fuel;
	cout << "Bonus : " << bonus << endl;




	system("pause");
}