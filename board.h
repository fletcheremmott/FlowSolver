#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>

class Board {
    private:
        int rows;
        int cols;
        int flows;
        std::vector<std::vector<char> > board;
    
    public:
        Board(int r, int c, int f);
        
        void displayBoard() const;
        void addFlows();
        void clearBoard();
        //void solveBoard();
        bool isFull();
        
};

#endif //BOARD_H