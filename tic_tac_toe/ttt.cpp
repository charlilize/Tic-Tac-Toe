#include <iostream>
#include "ttt_functions.hpp"
#include <cctype>
#include <vector>

// g++ ttt.cpp ttt_functions.cpp
    
int play() {

    intro();

    std::string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    draw(board);

    std::string firstPlayer;   
    std::string secondPlayer;  
    firstPlayer = chooseMark_firstPlayer(firstPlayer);
    secondPlayer = chooseMark_secondPlayer(firstPlayer, secondPlayer);
    
    int turn = 0;

    while (turn < 9) {

        ++turn;

        playerTurns(turn, firstPlayer, secondPlayer, board);

        draw(board);

        turn = detectWinner(firstPlayer, secondPlayer, board, turn);

    } 

    char replay;
    std::cout << "Would you like to play again? (y/n)\n";
    std::cin >> replay;

    if (replay == 'y' || replay == 'Y') {

        play();

    }

    else if (replay == 'n' || replay == 'N') { 

        std::cout << "\nThanks for playing!\n\n";

    }

    return 0;

}

int main() {

    play();

}
