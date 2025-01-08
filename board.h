#ifndef BOARD_H
#define BOARD_H
#include <vector>

class Board {
    private:
        int boardSize;
        int numOfFlows;
        std::vector<std::vector<char>> board;
    
    public:
        Board(int size);
        ~Board();
        /*
        void addEdge(const Edge& edge);
        void printAdjacencyMatrix();
        void computeOddDegreeVertices(int* oddVertices, int& oddCount);
        */
};

#endif