#include<iomanip>
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	string FirstName, LastName; int Age; double Weight;

	cout << "This program shows FirstName, LastName, Age, Weight" << endl;

	cout << "First Name: " << endl;
	cin >> FirstName;
	
	cout << "Last Name: " << endl; 
	cin >> LastName;
	
	cout << "Age: " << endl; 
	cin >> Age;
	
	cout << "Weight: " << endl; 
	cin >> Weight;

	cout << "First Name: " << FirstName << "Last Name: " << LastName << "Age: " << Age << "Weight: " << Weight << endl;

	getch();
	return 0;
}