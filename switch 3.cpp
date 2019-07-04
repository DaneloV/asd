#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	double x, y; 
	char choice;

	cout << "Enter 2 numbers: "; cin >> x >> y;
	cout << "A - Addition" << "S - Subtraction" << "M - Multiplication" << "D - Division" << "Choose an operation: "; cin >> choice;
	switch (choice)

	{
	case 'a': case 'A':
	cout << "Sum = " << x + y;
	break;

	case 's': case 'S':
	cout << "Difference = " << x - y;
	break;

	case 'm': case 'M':
	cout << "Product = " << x * y;
	break;

	case 'd': case 'D':
	if(y==0)
	{cout << "Division by 0 is not allowed.";}
	else 
	{cout << "Quotient = " << x / y;}
	break;

	default:
	cout << "Invalid input!";
	}
	
getch();
return 0;
}