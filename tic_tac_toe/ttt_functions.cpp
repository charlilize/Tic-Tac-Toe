#include <iostream>
#include <vector>

// g++ ttt.cpp ttt_functions.cpp

void intro() {

    std::cout << "\nX O X O X O X O X O X O X O X O X O X O X O X O X O X O X O X O X O X\n\n";
    std::cout << "Welcome to a game of Tic-Tac-Toe! The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.\n";
    std::cout << "Each player takes turns picking where to place their 'X' or 'O'. It's up to you, but try to beat the other player!\n";
    std::cout << "Choose a position by choosing the space's corresponding row number then column number:\n";
    std::cout << "EX) 12 places the mark in the top middle box.\n\n";
    std::cout << "Enter quit now to quit the game; otherwise, there is no going back.\n";
    std::cout << "Good luck!\n\n";

}

void draw(std::string board[9]) {
 
    std::cout << "\n\n";
    std::cout << "    1     2     3\n";
    std::cout << "       |     |      \n";
 
    std::cout << "1   " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 
    std::cout << "  _____|_____|_____ \n";
    std::cout << "       |     |      \n";
 
    std::cout << "2   " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 
    std::cout << "  _____|_____|_____ \n";
    std::cout << "       |     |      \n";
 
    std::cout << "3   " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "       |     |      \n";
 
    std::cout << "\n";

}

std::string chooseMark_firstPlayer(std::string firstPlayer) {

    std::cout << "\nPlayer 1, would you like to be X or O?\n\n";
    std::cin >> firstPlayer;

    if (firstPlayer == "quit" || firstPlayer == "Quit") {

        std::cout << "\nThanks for playing!\n\n";
        exit(0);

    }

        for (int i = 0; i < firstPlayer.length(); i++) {

        firstPlayer = toupper(firstPlayer[i]);

        }

        while (firstPlayer != "X" && firstPlayer != "x" && firstPlayer != "O" && firstPlayer != "o" && firstPlayer != "quit" && firstPlayer != "Quit") {

        std::cout << "\nThat's not a valid mark. Please choose again.\n\n";
        std::cin >> firstPlayer;
        for (int i = 0; i < firstPlayer.length(); i++) {

        firstPlayer = toupper(firstPlayer[i]);

        }
        
        }

            return firstPlayer;


}


std::string chooseMark_secondPlayer(std::string firstPlayer, std::string secondPlayer) {

    if (firstPlayer == "O" || firstPlayer == "o") {

        secondPlayer = "X";

    }

    else if (firstPlayer == "X" || firstPlayer == "x") {
            
        secondPlayer = "O";

    }

    return secondPlayer;

}

void playerTurns(int turn, std::string firstPlayer, std::string secondPlayer, std::string board[9]) {

        if (turn % 2 != 0) {

        int position;
        std::cout << "\n\nPlayer 1, where would you like to place your " << firstPlayer << "?\n";
        std::cin >> position;

        // Error Check
        while (!std::cin.good()) { // == false) 

            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');

            std::cout << "\n\nInvalid combination. Remember row number then column number. Please choose again.\n";
            std::cin >> position;

        }

        switch(position) {
            default:
                std::cout << "\nInvalid combination. Remember row number then column number. Please choose again.\n";
                playerTurns(turn, firstPlayer, secondPlayer, board);
                break;
            case 11:
                if (board[0] == " ") {

                    board[0] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 12:
                if (board[1] == " ") {

                    board[1] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                
                break;
            case 13:
                if (board[2] == " ") {

                    board[2] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 21:
                if (board[3] == " ") {

                    board[3] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 22:
                if (board[4] == " ") {

                    board[4] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 23:
                if (board[5] == " ") {

                    board[5] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 31:
                if (board[6] == " ") {

                    board[6] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 32:
                if (board[7] == " ") {

                    board[7] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;
            case 33:
                if (board[8] == " ") {

                    board[8] = firstPlayer;

                } else {

                    std::cout << "\nSpot is already taken!";

                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }
                break;

            }

            }       
        

        if (turn % 2 == 0) {

        int position;
        std::cout << "\n\nPlayer 2, where would you like to place your " << secondPlayer << "?\n";
        std::cin >> position;

        // Error Check
        while (!std::cin.good()) { // == false) 

            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');

            std::cout << "\n\nInvalid combination. Remember row number then column number. Please choose again.\n";
            std::cin >> position;

        }

        switch(position) {
            default:
                std::cout << "\nInvalid combination. Remember row number then column number. Please choose again.\n";
                playerTurns(turn, firstPlayer, secondPlayer, board);
                break;
            case 11:
                if (board[0] == " ") {

                    board[0] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);

                }  
                break;
            case 12:
                if (board[1] == " ") {

                    board[1] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 13:
                if (board[2] == " ") {

                    board[2] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 21:
                if (board[3] == " ") {

                    board[3] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 22:
                if (board[4] == " ") {

                    board[4] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 23:
                if (board[5] == " ") {

                    board[5] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 31:
                if (board[6] == " ") {

                    board[6] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 32:
                if (board[7] == " ") {

                    board[7] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            case 33:
                if (board[8] == " ") {

                    board[8] = secondPlayer; 

                } else {

                    std::cout << "\nSpot is already taken!";
                    playerTurns(turn, firstPlayer, secondPlayer, board);
                    
                }  
                break;
            }


        }


    }

int detectWinner(std::string firstPlayer, std::string secondPlayer, std::string board[9], int turn) {

    if (board[0] == firstPlayer && board[4] == firstPlayer && board[8] == firstPlayer ||
        board[6] == firstPlayer && board[4] == firstPlayer && board[2] == firstPlayer ||
        board[0] == firstPlayer && board[1] == firstPlayer && board[2] == firstPlayer ||
        board[0] == firstPlayer && board[3] == firstPlayer && board[6] == firstPlayer || 
        board[1] == firstPlayer && board[4] == firstPlayer && board[7] == firstPlayer ||
        board[2] == firstPlayer && board[5] == firstPlayer && board[8] == firstPlayer ||
        board[3] == firstPlayer && board[4] == firstPlayer && board[5] == firstPlayer ||
        board[6] == firstPlayer && board[7] == firstPlayer && board[8] == firstPlayer) {

        std::cout << "\n\n ╔═*.·:·.✧ ✦ ✧.·:·.*═╗";
        std::cout << "\n     Player 1 Wins!";
        std::cout << "\n ╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n\n";

        turn = 9;

    } else if (board[0] == secondPlayer && board[4] == secondPlayer && board[8] == secondPlayer ||
               board[6] == secondPlayer && board[4] == secondPlayer && board[2] == secondPlayer ||
               board[0] == secondPlayer && board[1] == secondPlayer && board[2] == secondPlayer ||
               board[0] == secondPlayer && board[3] == secondPlayer && board[6] == secondPlayer || 
               board[1] == secondPlayer && board[4] == secondPlayer && board[7] == secondPlayer ||
               board[2] == secondPlayer && board[5] == secondPlayer && board[8] == secondPlayer ||
               board[3] == secondPlayer && board[4] == secondPlayer && board[5] == secondPlayer ||
               board[6] == secondPlayer && board[7] == secondPlayer && board[8] == secondPlayer) {

        std::cout << "\n\n ╔═*.·:·.✧ ✦ ✧.·:·.*═╗";
        std::cout << "\n     Player 2 Wins!";
        std::cout << "\n ╚═*.·:·.✧ ✦ ✧.·:·.*═╝\n\n";

        turn = 9;   // 

    } else if (turn == 9) {

        std::cout << "\n ╔══════════╗\n";
        std::cout << "\n It's a tie!\n";
        std::cout << "\n ╚══════════╝\n\n";

    }

    return turn;

}
