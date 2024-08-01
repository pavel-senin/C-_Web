#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
public:
    Game(int totalMatches, int maxMatchesPerTurn);
    void play();

private:
    int totalMatches;
    int maxMatchesPerTurn;
    Player player1;
    Player player2;

    void displayMatches() const;
    int getMatchesFromPlayer(const Player& player) const;
};

#endif

