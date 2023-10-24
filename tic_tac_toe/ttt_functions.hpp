#include <iostream>
#include <vector>

void intro();
void draw(std::string board[9]);
std::string chooseMark_firstPlayer(std::string firstPlayer);
std::string chooseMark_secondPlayer(std::string firstPlayer, std::string secondPlayer);
void playerTurns(int turn, std::string firstPlayer, std::string secondPlayer, std::string board[9]);
int detectWinner(std::string firstPlayer, std::string secondPlayer, std::string board[9], int turn);
