#include "board.h"
#include <iostream>
#include <vector>

using namespace std;

Board::Board(int num) : boardSize(num) {
    board = new char*[boardSize];
    for (int i = 0; i < boardSize; ++i) {
        board[i] = new char[boardSize];
    }
}

Board::~Board() {
    for (int i = 0; i < boardSize; ++i) {
        delete[] board[i];
    }
    delete[] board;
}/*
// Initialize the board with a specific character
void Board::initializeBoard(char fillChar) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            board[i][j] = fillChar;
        }
    }
}

// Display the board
void Board::displayBoard() const {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << ' ';
        }
        cout << endl;
    }
}

// Set a specific cell in the board
void Board::setCell(int row, int col, char value) {
    if (row >= 0 && row < size && col >= 0 && col < size) {
        board[row][col] = value;
    } else {
        cerr << "Error: Cell (" << row << ", " << col << ") is out of bounds." << endl;
    }
}

// Get the value of a specific cell
char Board::getCell(int row, int col) const {
    if (row >= 0 && row < size && col >= 0 && col < size) {
        return board[row][col];
    } else {
        cerr << "Error: Cell (" << row << ", " << col << ") is out of bounds." << endl;
        return '\0'; // Return null character for invalid indices
    }
}
*/