#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(char symbol);
    void makeMove(const std::vector<std::vector<char>>& board, int& row, int& col) override;
};

#endif // HUMANPLAYER_H
