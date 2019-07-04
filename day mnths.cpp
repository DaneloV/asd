#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	int X, Y, Z, S;

	cout << "ENTER THE FOLLOWING DATA." << endl;

	cout << "Enter Month: " << endl; cin >> X;

	cout << "Enter Day: " << endl; cin >> Y;

	cout << "Enter Year: " << endl; cin >> Z;

	switch(X)
	{
	case 1:
		if (X = 1 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "January" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 2:
		if (X = 2 && Y >= 1 && Y <= 29 && Z%4 != 0)
		{ cout << "DATE: " << "February" << " " << Y << " , " << Z << endl; } 
		else if (X = 2 && Y >=1 && Y <= 28 && Z <= 9999)
		{ cout << "DATE: " << "February" << " " << Y << " , " << Z << endl; } 
		else 
		cout << "Invalid input" << endl;
		break;

	case 3:S
		if (X = 3 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "March" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 4:
		if (X = 4 && Y >= 1 && Y <= 30 && Z <= 9999)
		{ cout << "DATE: " << "April" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 5:
		if (X = 5 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "May" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 6:
		if (X = 6 && Y >= 1 && Y <= 30 && Z <= 9999)
		{ cout << "DATE: " << "June" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 7:
		if (X = 7 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "July" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 8:
		if (X = 8 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "August" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 9:
		if (X = 9 && Y >= 1 && Y <= 30 && Z <= 9999)
		{ cout << "DATE: " << "September" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 10:
		if (X = 10 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "October" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 11:
		if (X = 11 && Y >= 1 && Y <= 30 && Z <= 9999)
		{ cout << "DATE: " << "November" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;

	case 12:
		if (X = 5 && Y >= 1 && Y <= 31 && Z <= 9999)
		{ cout << "DATE: " << "December" << " " << Y << " , " << Z << endl; }
		else 
		cout << "Invalid input" << endl;
		break;
	}

getch();
return 0;
}