#include <iostream>
using namespace std;

void main()
{
	//Count digits in a number

	int number;
	cout << "Number: ";
	cin >> number;

	if (number == 0)
		cout << "You have entered 0.\n";

	else {
		if (number < 0)
			number = -1 * number;

		int counter = 0;  

		while (number > 0){ 
			number = number/ 10;
			counter++;
		}
        
		cout << "Number contains " << counter << " digits\n";
	}

	system("pause>0");
 }