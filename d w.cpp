#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x;
	
	cout << "Counting to 20... START!!!" << endl;
	
	for ( x = 1; x <= 20; x++ )
	{
		if ( x == 7)
		{
		cout << "Lucky 7" << endl; continue;
		}	

		if ( x == 13)
		{
		cout << "Unlucky 13" << endl; continue;
		}

		if ( x == 16)
		{
		cout << "Sweet 16" << endl; continue;
		}

		cout << x << endl;
	}

getch();
return 0;
}
