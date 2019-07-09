#include <iostream>
#include <conio.h>

using namespace std;
 
int main()
{
	const double summerjobincome = 0.14;
	const double clothesandaccessories = 0.10;
	const double schoolsupplies = 0.01;
	const double savingsbonds = 0.25;
	const double additionalsavingsbonds = 0.50;

	double rate, hours, clothes, school, bonds, totalincome, withtax, additional, after;

	cout << "\n Enter your pay rate per hour: ";
	cin >> rate;

	cout << "\n Enter the number of hours you worked each week: ";
	cin >> hours;

	totalincome = rate * hours;
	cout << "\n The total income before taxes is: " << totalincome << endl;

	withtax = totalincome - summerjobincome * totalincome;
	cout << "\n The total income after taxes is: " << withtax << endl;

	clothes = clothesandaccessories * withtax;
	cout << "\n The total money spent on clothes and other accessories: " << clothes << endl;

	school = schoolsupplies * withtax;
	cout << "\n The total money spent on school supplies: " << school << endl;

	after = withtax - (clothes + school);
	bonds = savingsbonds * after;
	cout << "\n The total money spend on saving bonds: " << bonds << endl;

	additional = additionalsavingsbonds * bonds;
	cout << "\n The money your parents spend to buy additional savings bonds for you: " << additional << endl;

getch ();
return 0;
}

