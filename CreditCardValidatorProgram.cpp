#include <iostream>

// Luhn's Algorithm
// 1. Double every second digit from right to left. If doubled number if 2 digits, split them 
// 2. Add all single digits from step 1.
// 3. Add all odd numbered digits from rigth to left
// 4. Sum results from steps 2 & 3.
// 5. If step 4 is divisible by 10, # is valid.

int getDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main(){

    // Initialize the variables cardNumber and result
    std::string cardNumber;
    int result;

    // User input for card number
    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    // For step 4: we're adding the even and odd digits
    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is not valid";
    }


    return 0;
}

int getDigit(const int number){

    return number % 10 + (number / 10 % 10);
}

int sumOddDigit(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2 ){
        sum += getDigit(cardNumber[i] - '0');
    }

    return sum;
    
}

int sumEvenDigit(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2 ){
        sum += getDigit((cardNumber[i] - '0')*2);
    }

    return sum;
}