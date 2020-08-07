#include <iostream>
using namespace std;



//int	x = 0;			
//while (x) {
//	++x;							
//	cout << x << endl;  // infinite loop!
//}
int main()
{

	int	x = 0;
	while (!x) {
		x++;
		cout << x << endl;
	}

	system("Pause");
}