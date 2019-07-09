#include <iomanip>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int i, n;
    float s = 0.0;

    cout << " Display n terms of harmonic series and their sum:\n";
	do

	{
	cout << " Input number of terms: "; cin >> n;
	for (i = 1; i <= n; i++) 
	{
        if (i < n) 
        {
            cout << "1/" << i << " + ";
            s += 1 / (float)i;
        }
        if (i == n) 
        {
            cout << "1/" << i;
            s += 1 / (float)i;
        }
    }
    cout << "\n The sum of the series upto " << n << " terms: " << s << endl;
		
		char a;
		cout << "Do you want to continue? (Y / N)"; cin >> a;

		switch(a)
		{

		case 'Y': case 'y':
			{
				continue;
			}	

		case 'N': case 'n':
			{
				cout << "Thank you!" << endl;
				break;
			}
	}
	while(a == 'Y' || a == 'y');

getch ();
return 0;
}