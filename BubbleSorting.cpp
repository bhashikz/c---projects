#include <iostream>
using namespace std;

void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";

    printArray(arr, n);
    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Arrange elements in the array from smallest to the biggest (Ascending order). {5,3,8,4,2}.

void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n-1; i++) {

        for (int j = 0; j < n-i-1; j++) { // j goes from 0 to 3, inclusive in the first iteration.

            if (arr[j] > arr[j+1]) { // If left array element is bigger than right array element.
                int temp = arr[j];   // Store the left element(bigger) in a temporary variable.
                arr[j] = arr[j+1];   // Make the right element(smaller) to take the place of the left element. 
                arr[j+1] = temp;     // Place the temp vairable(bigger) in the empty space of the right element. 
            }

        }

    }

}