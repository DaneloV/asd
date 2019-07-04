#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	char a;
	cout << "ENTER A LETTER: "; 
	cin >> a; 
	switch (a)
	{
		case 'a': case 'A':
		cout << "YOU'RE ADORABLE!!!" << endl;
		break;
		

		case 'b': case 'B':
		cout << "YOU'RE SO BEAUTIFUL!!!" << endl;
		break;

		case 'c': case 'C':
		cout << "YOU'RE SO CUTE AND FULL OF CHARM!!!" << endl;
		break;

		default:
		cout << "ENTER A DIFFERENT LETTER." << endl;
	}

getch();
return 0;
}