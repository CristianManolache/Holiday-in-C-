#include <iostream>
#include <string>
using namespace std;



int main()
{
	string word1 = "Game";
	string word2 = ("Over");
	string word3;
	word3.insert(0, 3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is : " << phrase << endl;
	cout << endl;
	cout << "The phrase has " << phrase.size() << " in it." << endl;





	system("Pause");
}