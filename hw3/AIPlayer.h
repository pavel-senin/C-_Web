#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "Player.h"

class AIPlayer : public Player {
public:
    AIPlayer(char symbol);
    void makeMove(const std::vector<std::vector<char>>& board, int& row, int& col) override;
};

#endif // AIPLAYER_H
