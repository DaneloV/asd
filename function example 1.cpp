#include <iostream>
#include <conio.h>

using namespace std;

int larger (int first, int second)
{
	int temp;
	if (first > second)
	{ 
	temp = first;
	}

	else
	{
	temp = second;
	}

return temp;
}

int main()
{
	cout << larger (3, 13);
	cout << larger (10,12);
	cout << larger (2, 12);

getch ();
return 0;
}