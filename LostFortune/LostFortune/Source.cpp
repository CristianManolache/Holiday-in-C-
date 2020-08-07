#include <iostream>
#include <string>
using namespace std;
//Global Variables
const int goldPieces = 900;
int numberMembers;
int numberKilled;
int numberSurvivors = numberMembers - numberKilled;
string fullName;
int main()
{
	//Display entry message
	cout << "Welcome to Lost Fortune" << endl;
	cout << "" << endl;
	cout << "Please enter the following for your personalized adventure!" << endl;
	cout << "Enter a number: ";
	cin >> numberMembers;
	cout << "Enter a number, smaller than the first: ";
	cin >> numberKilled;
	int numberSurvivors = numberMembers - numberKilled;
	cout << "Please enter your name : ";
	cin >> fullName;
	//Story
	cout << endl;
	cout << "A brave group of " << numberMembers << " set out on a guest -- in search of the lost treasure of the Ancient Dwarves. The group was led by the legendary rogue, " << fullName << " ." << endl;
	cout << endl;
	cout << "Along the way, a band of marauding ogres ambushed the party. All fought bravely under the command of " << fullName << " , and the ogres were defeated, but at a cost of the adventurers, " << numberKilled << " were vanquished, leaving just " << numberSurvivors << " in the group." << endl;
	cout << endl;
	cout << "The party was about to give up all hope. But while laying the decesead to rest, they stumbled upon the burried fortune. So the adventurers split " << goldPieces << " gold pieces. " << fullName << " held on to the extra " << (goldPieces % numberSurvivors) << " pieces to keep things fair of course." << endl;




	system("Pause");
}