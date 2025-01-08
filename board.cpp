#include "board.h"
#include <iostream>
#include <vector>
using namespace std;

Board::Board(int num) : boardSize(num), numOfFlows(0), board(num, vector<char>(num, ' ')) {}

Board::~Board() {}
/*
void Graph::addEdge(const Edge& edge) {
    int start = edge.getStartVert();
    int end = edge.getEndVert();

    adjMatrix[start - 1][end - 1] = 1;
    adjMatrix[end - 1][start - 1] = 1;
    numOfEdges++;
}

void Graph::printAdjacencyMatrix() {
    std::cout << "The adjacency matrix of G:\n";
    for (int i = 0; i < numOfVertices; i++) {
        for (int j = 0; j < numOfVertices; j++) {
                if (j == numOfVertices-1){
                        std::cout << adjMatrix[i][j];
                }
                else{
                std::cout << adjMatrix[i][j] << " ";
                }
        }
        std::cout << std::endl;
    }
}

void Graph::computeOddDegreeVertices(int* oddVertices, int& oddCount) {
    for (int i = 0; i < numOfVertices; i++) {
        int degree = 0;
        for (int j = 0; j < numOfVertices; j++) {
            if (adjMatrix[i][j] == 1) {
                degree++;
            }
        }

        if (degree % 2 != 0) {
            oddVertices[oddCount] = i + 1;
            oddCount++;
        }
    }
}

int* Graph::dijkstra(int source) {
    int* distances = new int[numOfVertices];
    bool* visited = new bool[numOfVertices];

    for (int i = 0; i < numOfVertices; i++) {
        distances[i] = (i == source) ? 0 : INT_MAX;
        visited[i] = false;
    }

    for (int count = 0; count < numOfVertices - 1; count++) {
        int u = -1;

        for (int i = 0; i < numOfVertices; i++) {
            if (!visited[i] && (u == -1 || distances[i] < distances[u])) {
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < numOfVertices; v++) {
            if (adjMatrix[u][v] == 1 && !visited[v] && distances[u] != INT_MAX && distances[u] + 1 < distances[v]) {
                distances[v] = distances[u] + 1;
            }
        }
    }

    delete[] visited;
    return distances;
}
*/