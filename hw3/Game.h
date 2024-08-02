#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Player.h"

class Game {
public:
    Game(int size);
    void addPlayer(Player* player);
    void play();

private:
    int size;
    std::vector<std::vector<char>> board;
    std::vector<Player*> players;
    int currentPlayerIndex;

    bool checkWin(char symbol);
    bool isBoardFull();
    void printBoard();
};

#endif // GAME_H

