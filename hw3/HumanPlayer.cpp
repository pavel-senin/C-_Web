#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(char symbol) : Player(symbol) {}

void HumanPlayer::makeMove(const std::vector<std::vector<char>>& board, int& row, int& col) {
    std::cout << "Enter row and column: ";
    std::cin >> row >> col;
}
