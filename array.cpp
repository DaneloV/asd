#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{		
	char header[] = "\n *** C Strings *** \n\n";

	char hello[30] = "Hello ", name[20], message[80];

	cout << header << "Your first name: "; 
	cin	>> setw(20) >> name;

	strcat ( hello, name );
	cout << hello << endl;
	cin.sync();

	cout << "What is the message for today?" << endl;
	cin.getline ( message, 80 );

	if (strlen (message) > 0)
	{
		for (int i=0; message [i] != '\0'; ++i)
		cout << message[i] << ' ';
		cout << endl;
	}

getch();
return 0;
}