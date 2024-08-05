#include <iostream>

// Linear search an element/number in an array

// Function declaration
int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10}; // Declaring an Array
    int size = sizeof(numbers)/ sizeof(numbers[0]); // Calculating the size of the array and assigning it to the variable size since we're dealing with an array.
    int index; // To keep track of the index of the element that we're searching for and displaying it.
    int myNum; // variable myNum takes as an input an element from the user to search for in the array numbers[].

    // We want to take as an input an element from the user to search for in the array 
    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum; 

    // Invoking a function that searches for an element in the Array with appropriate arguments 
    // We are passing numbers because it's the array we've already defined. Don't need to use numbers[].
    // We need to define size as an additional argument since we're dealing with arrays.
    // We need myNum since it is what we are considering as an input from the user. 

    index = searchArray(numbers, size, myNum);  // Invoking the function, this function should have matching set of parameters
    // The index "i" which is returned from the function is assigned to the index varaible. 

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array";
    }

    return 0;

}

// Function will return an index of the element we're searching for in the array, the return type is int.
int searchArray(int array[], int size, int element){ // Renaming the numbers array as an array[], since we can rename parameters

// Iterating over the elements in the array. Remember you can't pass sizeof(numbers)/ sizeof(numbers[0]), because when you pass an 
// array to a function it decays into a pointer, it forgets the size of the array and to overcome that you need to define the size 
// as an additional argument within the function. 

    for(int i = 0; i < size; i++){  
        // if array at index i matches with the element input by the user, return the index i. 

        if(array[i] == element){ // numbers[] and array[] are the same. Remember you can rename parameters. element and myNum are the same.
            return i;
        }

    }
    return -1; // -1 is a sentinal value
}




/*
// Linear search through an array of strings

int searchArray(std:: string array[], int size, std:: string element);


int main(){

    // Use double quotes while declaring elements in the string. Use [] for arrays. 
    std::string foods[] = {"banana", "cheese", "pizza", "yoghurt"};

    int size = sizeof(foods)/ sizeof(foods[0]);
    int index; // index of the food item if it's in the array.
    std::string myFood; // declare this to take an input from the user the element to search for.

    std:: cout << "Enter a food that you want to search: " << myFood << '\n';
    std:: getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index ;
    }

    else{
        std::cout << myFood << " is not in the array ";
    }

    return 0;

}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

return -1;
    
}

*/
