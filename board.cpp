#include "board.h"
#include <iostream>
#include <vector>

using namespace std;

Board::Board(int r, int c) : rows(r), cols(c), board(r, std::vector<char>(c, '.')) {}

void Board::displayBoard() const {
    int count = 0;
    cout << endl;
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << "-------";
            count++;
        }
        cout << endl;
        for (const auto& cell : row) {
            cout << "|  " << cell << "  |";
        }
        cout << endl;
    }
    for (int i = 0; i < count/cols; i++) {
        cout << "-------";
    }
    cout << endl;
    cout << endl;

}