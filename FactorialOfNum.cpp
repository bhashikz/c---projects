#include <iostream>
using namespace std;

void main()
{
	//The factorial of a number

	int number;
	cout << "Number: ";
	cin >> number;

	int factorial = 1; // Variable to keep the multiplication of numbers

	for (int i = number; i >= 1; i--) {
		factorial = factorial * i;
	}

	cout << number << "!=" << factorial;

	system("pause>0");
}

