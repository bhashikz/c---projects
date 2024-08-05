#include <iostream>
#include <iomanip> // For floating point numbers

// Function declaration
void showMenu();
void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

    double balance = 0; 
    int choice = 0;
    system("cls");

    do{

        showMenu();
        std::cout << "Enter your choice (1-4): \n";
        std::cin >> choice; 

        switch(choice){ 

            case 1: showBalance(balance); // Invoking the function showBalance and passing balance as an argument to the fuction
                    break;

            case 2: balance += deposit(); // Adding deposite to balance
                    showBalance(balance);          // Show balance after depositing money
                    break;

            case 3: balance -= withdraw(balance); // Withdrawing money from balance
                    showBalance(balance);                  // Show balance after withdrawal of money.
                    break;

            case 4: std::cout << "Thanks for visiting! \n";
                    break;

            default: std::cout << "Invalid choice \n";
        }


    }while(choice != 4); // 

    return 0;

}

void showMenu(){                
        std::cout << "1. Show balance \n";
        std::cout << "2. Deposit money \n";
        std::cout << "3. Withdraw money \n";
        std::cout << "4. Exit \n";
}

// Pass the variable "balance" as an argument to the function since balance is a local variable to main() 
void showBalance(double balance){ // In this case, we're not returning anything, we are just printing and hence the datatype is void
    std::cout << "Your balance is: $" << std:: setprecision(2) << std::fixed << balance << '\n';
}

// We can avoid passing balance as an argument to the deposit function.
// You don't need to necessarily check the balance while depositing the money

double deposit(){ // The datatype of the function should match the datatype of what we're returning. In this case the amount has "double" datatype
    double amount = 0; 

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;         
        
    if(amount > 0){ // Make sure the user deposits a positive amount.
        return amount;  
    }
    else{
        std::cout << "That is not a valid amount:\n ";
        return 0;
    }
}

double withdraw(double balance){ // You need to check the balance while withdrawing money
    double amount = 0;
 
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

  
    if(amount > balance){   // User can't withdraw money if the amount to be withdrawn is greater than the balance in the account. 
        std::cout << "insufficient funds:\n";
        return 0;
    }
   
    else if(amount < 0){  // User can't withdraw negative amount of money
        std::cout << "That's not a valid amount to withdraw\n";
        return 0;
    }

    else{
        return amount; // The return type of amount is double. 
    }        
}



