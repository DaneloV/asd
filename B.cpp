#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string first, last;
	int age;
	double weight;

	cout << "First Name: " << endl;
	cin >> first;
	cout << "Last Name: " << endl;
	cin >> last;
	cout << "Age: " << endl;
	cin >> age;
	cout << "Weight: " >> endl;
	cin >> weight;
	cout << "FirstName: " << first << "LName: " << last << "Age: " << age << "Weight: " << weight << endl;

	getch();
	return 0;
}