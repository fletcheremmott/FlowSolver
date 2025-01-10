#include "board.h"
#include <iostream>
using namespace std;

int main()
{
    int size;
    int numFlows;

    cout << "Enter the size of the board: ";
    cin >> size;
    cout << "Enter the number of flows: ";
    cin >> numFlows;
    Board gameBoard(size, size, numFlows);

    gameBoard.addFlows();
    gameBoard.displayBoard();

    /*
        ask for input board
        load input board into char [][]
        display input board
        run algorithm
        display output
    */
    return 0;
}