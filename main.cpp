#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int *number = new int;

	cout << "Enter the number: ";
	cin >> *number;

	if (*number < 0)
	{
		cout << *number << " is negative" << endl;
	}
	else if (*number > 0)
	{
		cout << *number << " is positive" << endl;
	}
	else {
		cout << *number << " equals zero" << endl;
	}

	delete number;
	_getch();
	return 0;
}