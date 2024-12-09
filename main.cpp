#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int *first_number = new int;
	int *second_number = new int;

	cout << "Enter the first number: ";
	cin >> *first_number;
	cout << "Enter the second number: ";
	cin >> *second_number;

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