#include <iostream>
using namespace std;

//Declare enum Global!
enum difficultyLevel
{
	Easy = 1,
	Normal = 2,
	Hard = 3,
	VeryHard = 4,
	Realistic = 5
};
string displayLevel[5] = {"Easy = 1","Normal = 2","Hard = 3","Very Hard = 4","Realistic = 5"};
int main()
{
	//Display the levels
	for (int i = 0; i<5; i++)
	{
		cout << displayLevel[i] << endl;
	}
	int choice;
	do 
	{
		choice;
		cout << "Please choose your difficulty: ";
		cin >> choice;
		switch (choice)
		{
		case Easy:
			cout << "You choose EASY." << endl;
			break;
		case Normal:
			cout << "You choose NORMAL." << endl;
			break;
		case Hard:
			cout << "You choose HARD." << endl;
			break;
		case VeryHard:
			cout << "You choose VERY HARD." << endl;
			break;
		case Realistic:
			cout << "You choose REALISTIC." << endl;
			break;
		default:
			cout << "Please choose the right difficulty!" << endl;
			break;
		}
	} while (!choice);
	system("Pause");
}