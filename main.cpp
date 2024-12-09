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

	cout << "Enter the size of array: ";
	cin >> size;

	int* arr = new int[size];

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 50);

	cout << endl << endl << "Array:" << endl;
	for (int* ptr = arr; ptr < arr + size; ptr++)
	{
		*ptr = dist(gen);

		cout << *ptr << " ";
	}

	cout << endl << "Result:" << endl;
	for (int* ptr = arr + size - 1; ptr >= arr; ptr--)
	{
		cout << *ptr << " ";
	}
	cout << endl << endl;

	_getch();

	delete[] arr;

	return 0;
}