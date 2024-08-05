// Number Guessing Game

#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL)); // Initialize a random number generator
    num = (rand()% 100) + 1; // Limit the random numbers generated between 1 and 100

    std::cout << "Number Guessing Game \n";

    do{
        std:: cout << "Enter a guess between (1-100): "; 
        std:: cin >> guess; // Take a random guess from the user
        tries++; // Increment tries variable to keep track of the score

        // Examine Guess against the random number generated with rand() function

        if(guess > num){
            std::cout << "Too high! \n ";
        }
        else if(guess < num){
            std::cout << "Too low! \n";
        }
        else{
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    return 0;

