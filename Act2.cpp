#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int X, Y;

	cout << "THE FOLLOWING PROGRAM ILLUSTRATES THE USAGE OF IF-ELSE STATEMENT AND RELATIONAL OPERATORS." << endl;


	cout << "ENTER THE FIRST NUMBER: " << endl;
	cin >> X;

	cout << "ENTER THE SECOND NUMBER: " << endl;
	cin >> Y;

	{
	if (X < Y)
	cout << "THE FIRST NUMBER IS LESS THAN THE SECOND NUMBER..." << endl;
	}
	{
	else if (X > Y)
	cout << "THE SECOND NUMBER IS LESS THAN THE FIRST NUMBER..." << endl;
	}
	{
	else
	cout << "THE FIRST AND SECOND NUMBER ARE EQUAL TO EACH OTHER..." << endl;
	}
	
getch();
return 0;	
}

