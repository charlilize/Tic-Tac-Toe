# Tic-Tac-Toe Game

This is a simple command-line implementation of the classic game Tic-Tac-Toe. The game allows two players to take turns placing their marks ('X' or 'O') on a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

## Getting Started

To run the game, you need to have a C++ compiler installed on your machine. The code has been tested with the g++ compiler.

1. Clone the repository to your local machine.
2. Open a terminal and navigate to the project directory.
3. Compile the code using the following command: g++ ttt.cpp ttt_functions.cpp -o ttt
4. Run the compiled executable: ./ttt


## How to Play

1. The game starts with an introduction message explaining the rules and instructions.
2. The game board is displayed, showing the positions on the grid.
3. Player 1 is prompted to choose between 'X' and 'O'.
4. Player 2 automatically gets the opposite mark.
5. Players take turns entering the position where they want to place their mark. This is done by choosing the row number followed by the column number. For example, entering "12" places the mark in row 1 and column 2.
6. The game board is updated after each turn.
7. The game continues until one player wins or all positions are filled.
8. After the game ends, players have the option to play again or quit.

## Functions

The code is organized into several functions to handle different aspects of the game:

- `intro()`: Displays the introduction message and rules.
- `draw(std::string board[9])`: Draws the game board with the current marks.
- `chooseMark_firstPlayer(std::string firstPlayer)`: Prompts Player 1 to choose their mark ('X' or 'O').
- `chooseMark_secondPlayer(std::string firstPlayer, std::string secondPlayer)`: Assigns the opposite mark to Player 2.
- `playerTurns(int turn, std::string firstPlayer, std::string secondPlayer, std::string board[9])`: Handles the turns of each player.
- `detectWinner(std::string firstPlayer, std::string secondPlayer, std::string board[9], int turn)`: Checks if there is a winner or a tie.
