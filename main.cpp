#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int *number = new int;

	cout << "Enter the first number: ";
	cin >> *number;

	if (*first_number < *second_number)
	{
		cout << *second_number << " is bigger, than " << *first_number << endl;
	}
	else if (*first_number > *second_number)
	{
		cout << *first_number << " is bigger, than " << *second_number << endl;
	}
	else {
		cout << *first_number << " equals " << *second_number << endl;
	}

	_getch();
	return 0;
}