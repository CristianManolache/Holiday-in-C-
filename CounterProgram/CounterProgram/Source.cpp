#include <iostream>
using namespace std;





int main()
{
	//Counting Forward
	cout << "Counting Forward:" << endl;
	for (int i=0; i < 11 ; i++)
	{
		
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Counting Backward:" << endl;
	//Counting Backward
	for (int i = 10; i >= 0; --i)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Counting by fives:" << endl;
	for (int i = 0; i<=50; i+=5)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Counting with null statement:" << endl;
	int count = 0;
	for ( ; count < 20;)
	{
		cout << count << " ";
		count++;
	}
	cout << endl;
	cout << endl;
	cout << "Counting by fives:" << endl;
	int ROWS = 5;
	int COLUMNS = 3;
	for (int i=0; i<ROWS;i++)
	{
		for (int j=0;j<COLUMNS;j++)
		{
			cout << i << "," << j << " ";
		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	system("Pause");
}