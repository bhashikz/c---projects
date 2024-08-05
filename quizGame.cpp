#include <iostream>

int main(){
    
    // A string array of questions
    std::string questions[] = {"1. What year was c++ created?: ",
                               "2. Who invented c++?: ",
                               "3. What is the predecessor of c++?: ",
                               "4. Is the Earth flat?: "};

    // A 2D array of options to the questions 
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--","B++"},
                                {"A. yes","B. no", "C. sometimes", "D. What's Earth?"}};


    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/ sizeof(questions[0]); // size 4
    char guess;
    int score;

    for(int i = 0; i < size ; i++){
        std::cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/ sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct\n";
            score++;
        }
        else{
            std::cout << "Wrong!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "Results\n";
    std::cout << "Correct guesses: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double) size)*100 << "%";

    return 0;

    }