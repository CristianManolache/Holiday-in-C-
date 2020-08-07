#include <iostream>
#include <string>
using namespace std;


int main()
{
	string userName, userPassword;
	bool accessUser = true;
	cout << "Welcome to Network Program !!" << endl;
	cout << endl;
	char again;
	do 
	{
		cout << "Please insert your Username: ";
		cin >> userName;
		cout << "Please insert your Password: ";
		cin >> userPassword;
		if (userName == "lmcristian" && userPassword == "supermario" || userName == "lmalexandru" && userPassword == "iwanttobuymac")
		{
			cout << "Welcome BOSS " << endl;
			accessUser = true;
		} else if (userName == "S.Meier" && userPassword == "civilization")
		{
			cout << "Hey SID." << endl;
			accessUser = true;
		}
		else if (userName == "guest" && userPassword == "guest")
		{
			cout << "Welcome guest!" << endl;
			accessUser = true;
		}
		else
		{
			cout << "Your login failed!" << endl;
			accessUser = false;
		}

		cout << "Do you want to continue ? (y/n)" << endl;
		cin >> again;
	} while ((!accessUser) || (again == 'y'));
	cout << "Have fun !" << endl;

	system("Pause");
}