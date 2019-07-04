#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x;

	cout << "ENTER YOUR GRADE HERE: " << endl;
	cin >> x;

	if (x >= 0 && x < 32)
	{
	cout << "FRESHMEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEN" << endl;
	}
	
	else if (x >= 32 && x < 64)
	{
	cout << "SOPHOMORE" << endl;
	}
	
	else if (x >= 64 && x < 96)
	{
	cout << "JUNIOR" << endl; 
	}
	
	else if (x >= 96 && x < 120)
	{
	cout << "SENIOR" << endl;
	}

	else
	{
	cout << "INVALID" << endl;
	}

getch();
return 0;
}