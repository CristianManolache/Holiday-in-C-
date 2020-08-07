#include <iostream>
using namespace std;



int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = {{'0','X','0'},
								{'X','X','0'},
								{' ','0','0'}};
	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS;i++)
	{
		for (int j = 0; j< COLUMNS;j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n X moves to the empty location.\n\n";
	board[2][0] = '0';
	cout << "Now the tic-tac-toe is:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "0 WINS!" << endl;



	system("pause");
}