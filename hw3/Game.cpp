#include "Game.h"
#include <iostream>
#include <algorithm>

Game::Game(int size) : size(size), board(size, std::vector<char>(size, ' ')), currentPlayerIndex(0) {}

void Game::addPlayer(Player* player) {
    players.push_back(player);
}

void Game::play() {
    int row, col;
    while (true) {
        printBoard();
        players[currentPlayerIndex]->makeMove(board, row, col);
        board[row][col] = players[currentPlayerIndex]->getSymbol();
        if (checkWin(players[currentPlayerIndex]->getSymbol())) {
            printBoard();
            std::cout << "Player " << players[currentPlayerIndex]->getSymbol() << " wins!\n";
            break;
        }
        if (isBoardFull()) {
            printBoard();
            std::cout << "It's a draw!\n";
            break;
        }
        currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
    }
}

bool Game::checkWin(char symbol) {
    // Check rows, columns and diagonals for win
    for (int i = 0; i < size; ++i) {
        if (std::all_of(board[i].begin(), board[i].end(), [symbol](char c) { return c == symbol; })) return true;
        if (std::all_of(board.begin(), board.end(), [i, symbol](std::vector<char>& row) { return row[i] == symbol; })) return true;
    }
    if (std::all_of(board.begin(), board.end(), [&, n = 0](std::vector<char>& row) mutable { return row[n++] == symbol; })) return true;
    if (std::all_of(board.begin(), board.end(), [&, n = size - 1](std::vector<char>& row) mutable { return row[n--] == symbol; })) return true;
    return false;
}

bool Game::isBoardFull() {
    return std::all_of(board.begin(), board.end(), [](std::vector<char>& row) {
        return std::all_of(row.begin(), row.end(), [](char c) { return c != ' '; });
    });
}

void Game::printBoard() {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << (cell == ' ' ? '.' : cell) << ' ';
        }
        std::cout << '\n';
    }
}
