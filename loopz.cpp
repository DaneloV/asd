#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
	int x;

	cout << "Counting to 100...START!!!" << endl;
	for (x = 1; x <= 100; x++)

	{
		if (x == 7) 
		cout << "Lucky 7!!!" << endl;
		
		if (x == 13)
		cout << "Unlucky 13!!!" << endl;

		if (x == 16)
		cout << "Sweet 16!!!" << endl;

		cout << x << endl;
	}

getch();
return 0;
}