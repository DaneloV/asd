#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int size, arr[50], i, j, temp;
	cout << "Enter the array size: ";
	cin >> size;

	cout << "Enter array elements: ";
	for (i = 0; i < size; i++)
	{ 
	cin >> arr[i]; 
	}

	cout << "Sorting array using selection sort..." << endl;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "Now the array after sorting is: " << endl;

	for (i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

getch();
return 0;
}