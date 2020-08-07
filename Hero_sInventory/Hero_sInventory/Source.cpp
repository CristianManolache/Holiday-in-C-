#include <iostream>	
#include <string>
using namespace std;



int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItemes = 0;
	inventory[numItemes++] = "sword";
	inventory[numItemes++] = "armor";
	inventory[numItemes++] = "shield";

	cout << "\nYour items: \n";
	for (int i = 0; i < numItemes; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItemes; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has " << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItemes < MAX_ITEMS)
	{
		inventory[numItemes++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}
	cout << "\nYour items:\n";
	for (int i = 0;i < numItemes;i++)
	{
		cout << inventory[i] << endl;
	}

	system("Pause");
}