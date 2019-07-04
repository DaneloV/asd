#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, j;
	
	{
	for (i = 1; i <= 5; i++)
	{
		if (i == 3) continue;
		cout << i << " " ;
	}

	for (j = 1; j <= 5; j++)
	{
		if (j == 4) break;
		cout << j << " ";
	}

	cout << endl;
	}

getch();
return 0;
}