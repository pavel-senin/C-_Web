#include "Game.h"
#include <iostream>

Game::Game(int totalMatches, int maxMatchesPerTurn)
    : totalMatches(totalMatches), maxMatchesPerTurn(maxMatchesPerTurn),
      player1("Player 1"), player2("Player 2") {}

void Game::play() {
    while (totalMatches > 0) {
        displayMatches();
        int matches = getMatchesFromPlayer(player1);
        totalMatches -= matches;
        if (totalMatches <= 0) {
            std::cout << player1.getName() << " loses!" << std::endl;
            return;
        }

        displayMatches();
        matches = getMatchesFromPlayer(player2);
        totalMatches -= matches;
        if (totalMatches <= 0) {
            std::cout << player2.getName() << " loses!" << std::endl;
            return;
        }
    }
}

void Game::displayMatches() const {
    std::cout << "Matches left: " << totalMatches << std::endl;
}

int Game::getMatchesFromPlayer(const Player& player) const {
    int matches;
    do {
        std::cout << player.getName() << ", take between 1 and " << maxMatchesPerTurn << " matches: ";
        std::cin >> matches;
    } while (matches < 1 || matches > maxMatchesPerTurn || matches > totalMatches);
    return matches;
}
