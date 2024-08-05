#include<iostream>
using namespace std;

class Book {
public:
	string Title;
	string Author;
	float* Rates; // Rating for the books published by authors
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}

	~Book() {
		delete[] Rates;
		Rates = nullptr;
	}

    Book(const Book& original){
        Title = original.Title;
        Author = original.Author;
        RatesCounter = original.RatesCounter;

        Rates = new float[RatesCounter]; // ***** New Array ******

        for(int i = 0; i < RatesCounter; i++){
            Rates[i] = original.Rates[i];        // Copying elements from original 
        }
    }
};

void PrintBook(Book book){
    cout << "Title: " << book.Title << endl;
    cout << "Author: " << book.Author << endl;

    float sum = 0;

    for (int i = 0; i < book.RatesCounter; i++){
        sum += book.Rates[i];
    }

    cout << "Avg rate: " << sum/ book.RatesCounter << endl;
}

int main() {

	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");

    Book book3(book1);
    PrintBook(book1);
     
	cin.get();
}