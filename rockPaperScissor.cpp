#include <iostream>
#include <ctime>

// Function declaration
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    // Declaring two players
    char player;
    char computer;

    player = getUserChoice();        // Invoking the function getUserChoice(), returns character 'r', 's' and 'p' assigned to player variable.
    std::cout << "Your choice: "; 
    showChoice(player);              // Displaying the choice, don't need a returntype for the function showChoice()

    computer = getComputerChoice();  // Invoking the function getComputerChoice() that generates a random choice of 'r', 's' and 'p'.
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){ // Return type of getComputerChoice() is a character since we're returning 'r', 'p', and 's'.

    char player; // Create a local variable player
    std::cout << "Rock, Papper, and Scissor Game!\n";

    do{

    std::cout << "Choose the following options to play the game\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";

    std::cin >> player; // Take as input a character either 'r','p', or 's'. 

    }while (player != 'r' && player != 'p' && player != 's');   


    return player;
}
char getComputerChoice(){ // Return type of getComputerChoice() is a character since we're returning 'r', 'p', and 's'.

    srand(time(0));    // Initializing a random seed.

    int num = rand()%3 + 1; // Generating three random nos. between 1 and 3.

    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
  
    return 0;

}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
                    break;
        case 'p': std::cout << "Paper\n";
                    break;
        case 's': std::cout << "Scissors\n";
                    break;

    }
}
void chooseWinner(char player, char computer){
// compare the user's choice against computer's choice and declare a winner. 
    switch (player){
        case 'r': if(computer == 'r'){
                        std::cout << "It's a tie.\n";
                    }  
                  else if(computer == 'p'){
                        std::cout << "You lose!\n";
                  }
                  else{
                        std::cout << "You win!\n";
                  }
                  break;

        case 'p': if(computer == 'r'){
                        std::cout << "You win!\n";
                    }  
                  else if(computer == 'p'){
                        std::cout << "It's a tie.\n";
                  }
                  else{
                        std::cout << "You lose!\n";
                  }
                  break;

        case 's': if(computer == 'r'){
                        std::cout << "You lose!\n";
                    }  
                  else if(computer == 'p'){
                        std::cout << "You win!\n";
                  }
                  else{
                        std::cout << "It's a tie.\n";
                  }
                  break;

    }
}