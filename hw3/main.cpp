#include <iostream>
#include "Game.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"

int main() {
    int size;
    std::cout << "Enter the size of the board (e.g., 3 for 3x3): ";
    std::cin >> size;

    Game game(size);
    HumanPlayer human('X');
    AIPlayer ai('O');

    game.addPlayer(&human);
    game.addPlayer(&ai);

    game.play();

    return 0;
}
