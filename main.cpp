#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

double* first_number = new double;
double* second_number = new double;

int* selected = new int;
double* result = new double;

void _action()
{
	switch (*selected)
	{
	case 1: *result = *first_number + *second_number; break;
	case 2: *result = *first_number - *second_number; break;
	case 3: *result = *first_number * *second_number; break;
	case 4: *result = *first_number / *second_number; break;
	case 5: *result = (*first_number / 100) * *second_number; break;
	}
}

int main()
{
	cout << "Enter the first number: ";
	cin >> *first_number;
	cout << "Enter the second number: ";
	cin >> *second_number;

	cout << endl << "Choose the option" << endl
		<< "1. SUM" << endl
		<< "2. MINUS" << endl
		<< "3. MULTIPLICATION" << endl
		<< "4. DIVISION" << endl
		<< "5. PERCENTAGE" << endl
		<< "Option: ";
	cin >> *selected;

	_action();

	cout << endl << "Result: " << *result;

	_getch();

	delete first_number;
	delete second_number;
	delete selected;
	delete result;

	return 0;
}