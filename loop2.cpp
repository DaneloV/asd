#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
int main()
	{
		int x;

		cout << "Enter the starting number: "; cin >> x;

		for (x >= 0, x--) 
		{ 
			cout << x << " , ";
		}

		cout << "BOOM!!!" << endl;

getch();
return 0;
}