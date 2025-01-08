#ifndef BOARD_H
#define BOARD_H
#include <iostream>

class Board {
    private:
        int boardSize;
        char** board;
    
    public:
        Board(int size);
        ~Board();
        /*
        void addEdge(const Edge& edge);
        void printAdjacencyMatrix();
        void computeOddDegreeVertices(int* oddVertices, int& oddCount);
        */
};

#endif //BOARD_H