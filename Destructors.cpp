#include <iostream>
#include<string>
using namespace std;

class Book {
public:
	string Title;
	string Author;
	int* Rates; // Rates array is a pointer and holds the address of the first element of the array
	int RatesCounter; // Counts the number of elements in the array

	int* Year;

	Book(string title, string author) { // Constructor
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new int[RatesCounter]; // Allocating new space, IMPORTANT- deallocate, or memory leaks.
		Rates[0] = 4;
		Rates[1] = 5;

		Year = new int;
		*Year = 10;

		cout << "Constructor invoked for "+Title<<endl;
	}

	~Book() { // Destructor
		//use for array
		delete [] Rates; // Deallocating the memory of the entire array, not just the first element.
		Rates = nullptr; // Nulling the pointer

		//use for simple types
		delete Year;
		Year = nullptr;

		cout << "Destructor invoked for "+Title<<endl;
	}
};

int main()
{
	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");

	// Error
	Book book3 = book1;
	
}

