#include "AIPlayer.h"
#include <cstdlib>
#include <ctime>

AIPlayer::AIPlayer(char symbol) : Player(symbol) {
    std::srand(std::time(nullptr));
}

void AIPlayer::makeMove(const std::vector<std::vector<char>>& board, int& row, int& col) {
    int size = board.size();
    do {
        row = std::rand() % size;
        col = std::rand() % size;
    } while (board[row][col] != ' ');
}
