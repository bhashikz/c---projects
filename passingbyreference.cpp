#include <iostream>
#include <vector>

// Pass by reference

void swap(std::string &x, std::string &y);

int main(){
    std::string x = "cool-aid";
    std::string y = "water";
    
    // the values of x and y are copied into the function parameters x and y. when swap(x, y) is called
    swap(x, y); //  When we're invoking the function, C++ is creating copies of the values.

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){ // We're swapping the original values by using memory address with "&" operator

    std::string temp;

    temp = x;            // temp = "cool-aid"
    x = y;               // x = "water" (copy inside function)
    y = temp;            // y = "cool-aid" (copy inside function)
}


/*

// Pass by reference: Another Example.

void modifyVector(std::vector<int> &vec) {
    vec.push_back(10); // Modify the original vector by adding a number 10
}

int main() {
    std::vector<int> myVector = {1, 2, 3};

    std::cout << "Before: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    modifyVector(myVector); // Pass the vector by reference

    std::cout << "After: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

*/