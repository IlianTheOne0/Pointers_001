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
	int sum = 0;

	cout << "Enter the size of array: ";
	cin >> size;

	int *arr = new int[size];

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 50);

	cout << "Array: ";

	for (int *ptr = arr; ptr < arr + size; ptr++)
	{
		*ptr = dist(gen);
		sum += *ptr;

		cout << *ptr << " ";
	}

	cout << endl << endl << "Result: " << sum << endl;

	_getch();
	
	delete[] arr;
	
	return 0;
}