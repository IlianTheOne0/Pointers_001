#include <iostream>
#include <conio.h>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

int main()
{
	int size;

	cout << "Enter the size of first array: ";
	cin >> size;

	int* first_arr = new int[size];
	int* second_arr = new int[size];

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 50);

	cout << endl << endl << "First array:" << endl;
	for (int *ptr1 = first_arr, *ptr2 = second_arr; ptr1 < first_arr + size; ptr1++, ptr2++)
	{
		*ptr1 = dist(gen);
		*ptr2 = *ptr1;

		cout << *ptr1 << " ";
	}
	cout << endl << endl;

	cout << "Second array:" << endl;
	for (int* ptr = second_arr; ptr < second_arr + size; ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;

	_getch();

	delete[] first_arr;
	delete[] second_arr;

	return 0;
}