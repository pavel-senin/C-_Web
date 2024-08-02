#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

class Player {
public:
    Player(char symbol);
    virtual void makeMove(const std::vector<std::vector<char>>& board, int& row, int& col) = 0;
    char getSymbol() const;

protected:
    char symbol;
};

#endif // PLAYER_H
