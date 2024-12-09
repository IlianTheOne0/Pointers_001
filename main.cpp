#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int *first_number = new int;
	int *second_number = new int;

	int* temp = new int;

	cout << "Enter the first number: ";
	cin >> *first_number;
	cout << "Enter the second number: ";
	cin >> *second_number;

	*temp = *first_number;
	*first_number = *second_number;
	*second_number = *temp;

	cout << endl << "Result: " << endl << "First number: " << *first_number << endl << "Second number: " << *second_number;

	_getch();

	delete first_number;
	delete second_number;
	delete temp;

	return 0;
}