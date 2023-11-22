#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: \n",
                               "2. Who invented C++?: \n",
                               "3. What is the predecessor of C++?: \n",
                               "4. Is the Earth flat?\n"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum", "B. Bjarne Stroutrup", "C. John Carmack", "D. Mark Zuckerburg"},
                               {"A. C", "B. C+", "C. C--", "D. B++"},
                               {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int qSize = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int correct = 0;
    
    for(int i = 0; i < qSize; i++){
        std::cout << "*****************************\n";
        std::cout << questions[i];
        std::cout << "*****************************\n";
        for(auto& opt : options[i]){
            std::cout << opt << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            correct++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout << "CORRECT ANSWER: " << answerKey[i] << '\n';
        }
    }

    std::cout << "You got " << correct << " questions out of 4 correct!";

    return 0;
}