#include "board.h"
#include <iostream>
#include <vector>

using namespace std;

Board::Board(int r, int c, int f) : rows(r), cols(c), flows(f), board(r, std::vector<char>(c, ' ')) {}

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

void Board::addFlows() {
    int point1x;
    int point1y;
    int point2x;
    int point2y;
    int countASCII = 65;
    if (flows > 0)
        cout << "Enter each flow as a pair of points with x and y inputted individually." << endl;

    for (int i = 0; i < flows; i++) {
        cout << "Flow " << i+1 << endl;

        cout << "Point 1 X: ";
        cin >> point1x;
        cout << "Point 1 Y: ";
        cin >> point1y;

        cout << "Point 2 X: ";
        cin >> point2x;
        cout << "Point 2 Y: ";
        cin >> point2y;
        char character = static_cast<char>(countASCII);
        board[point1y][point1x] = character;
        board[point2y][point2x] = character;
        countASCII++;
    }
}

void Board::clearBoard() {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            board[i][j] = ' ';
        }
    }
}
