#include "Player.h"
#include <iostream>

Player::Player(const std::string& name) : name(name) {}

const std::string& Player::getName() const {
    return name;
}

int Player::takeMatches(int maxMatches) const {
    int matches;
    do {
        std::cout << name << ", take between 1 and " << maxMatches << " matches: ";
        std::cin >> matches;
    } while (matches < 1 || matches > maxMatches);
    return matches;
}
