#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>

class Board {
    private:
        int rows;
        int cols;
        std::vector<std::vector<char> > board;
    
    public:
        Board(int r, int c);
        
        void displayBoard() const;
        
        //void addEdge(const Edge& edge);
        //void printAdjacencyMatrix();
        //void computeOddDegreeVertices(int* oddVertices, int& oddCount);
        
};

#endif //BOARD_H