#include <iostream>
#include <ctime>

/* //   TEMPLATES
// int max(int x, int y){
//     return (x > y) ? x : y; // If x is greater than y, return x and if not return y
// }

// double max(double x, double y){
//     return (x > y) ? x : y; // If x is greater than y, return x and if not return y
// }

// char max(char x, char y){
//     return (x > y) ? x : y; // If x is greater than y, return x and if not return y
// }

// Write a function that accepts any datatypes.
template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y; // If x is greater than y, return x and if not return y
}


int main(){
    std::cout << max(1, 2.1) <<'\n';
    return 0;
}

*/


/* // STRUCTURE

// Structure groups different variables under one name. 

// The identifier of struct is "student"
struct student{ // sturct may contains different datatypes e.g. int, double, bool, string etc. 
    std::string name; // Variables of struct are known as members
    double gpa; 
    bool enrolled = true;
};

int main(){

    student student1; // "student 1" is the identifier. 
    student1.name = "Lily"; // Members of struct are access by "class member access operator (.)"
    student1.gpa = 4.5; 
    
    student student2; // "student 2" is the identifier.
    student2.name = "Mark";
    student2.gpa = 3.5;
    
    student student3; // "student 3" is the identifier.
    student3.name = "Jess";
    student3.gpa = 2.5;
    
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}

*/
/*

// PASS STRUCT AS ARGUMENT

struct Car{            // Identifier of struct is "Car"
    std::string model; // Members of struct.
    int year;
    std::string color;

};

void printCar(Car &car); // Function declaration
void paintCar(Car &car, std::string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2024;
    car1.color = "yellow";

    car2.model = "Tesla";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2 , "orange");

    // Structure are pass by value than pass by reference.
//    std::cout << &car1 << '\n';

    printCar(car1); // We're passing the struct as an argument to the function, we're creating the copy of the original struct. 
    printCar(car2);
    return 0;
}

// Display members of the car

void printCar(Car &car){

    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;

}

*/


// Enum - ENUMERATION 

// uer-defined datatype of paired named-integer constants. 

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

    Day today = sunday;

    switch(today){ // switch quantity not an integer
  
        case sunday: std::cout << "It is Sunday!\n";
                        break;
                        
        case monday: std::cout << "It is Monday!\n";
                        break;

        case tuesday: std::cout << "It is Tuesday!\n";
                        break;

        case wednesday: std::cout << "It is Wednesday!\n";
                        break;

        case thursday: std::cout << "It is Thursday!\n";
                        break;

        case friday: std::cout << "It is Friday!\n";
                        break;

        case saturday: std::cout << "It is Saturday!\n";
                        break;
    }



    return 0;
}