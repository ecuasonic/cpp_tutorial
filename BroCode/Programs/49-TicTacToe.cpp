#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << '\n' << "Thanks for playing!\n";

    return 0;
}
void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}
void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        else{
            std::cout << "The space is alreay occupied!\n";
        }
    }while(!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer){

    if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        std::cout << (spaces[4] == player ? "YOU WIN!" : "COMPUTER WINS!");
        return true;
    }
    if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        std::cout << (spaces[4] == player ? "YOU WIN!" : "COMPUTER WINS!");
        return true;
    }
    for(int i = 0; i <= 6; i+=3){
        if(spaces[i] != ' ' && spaces[i] == spaces[i+1] && spaces[i+1] == spaces[i+2]){
            std::cout << (spaces[i] == player ? "YOU WIN!" : "COMPUTER WINS!");
            return true;
        }
    }
    for(int i = 0; i <= 2; i++){
        if(spaces[i] != ' ' && spaces[i] == spaces[i+3] && spaces[i+3] == spaces[i+6]){
            std::cout << (spaces[i] == player ? "YOU WIN!" : "COMPUTER WINS!");
            return true;
        }
    }

    return false;
}
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE!";
    return true;
}
