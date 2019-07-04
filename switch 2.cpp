#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	double x, y;
	char ans;

	cout << "\n\tA - Addition\n\tS - Subtraction" << "\n\tM - Multiplication\n\tD - Division" << "\n\n\tChoose an operation: ";
	cin >> ans;
	
	cout << "\nEnter 2 numbers: ";
	cin >> x >> y;
	switch(ans)
	{
	case 'a': case 'A':
	cout << "sum = " << x + y;
	break;

	case 's': case 'S':
	cout << "difference = " << x - y;
	break;

	case 'm': case 'M':
	cout << "product = " << x * y;
	break;

	case 'd': case 'D':
	if(y==0)
	cout << "division by 0 is not allowed!";
	else 
	cout << "quotient = " << x / y;
	break;

	default:
	cout << "invalid input!";

getch();
return 0;
}