#pragma once
#include <iostream>
#include <array>

using namespace std;

#define MAX_SIZE 5

/**
 * @class Stack
 * @brief A class to represent a stack data structure for graph vertices.
 * 
 * This class provides basic stack operations such as push, pop, peek, and 
 * checking if the stack is empty. It is used to manage vertices in a graph.
 */
class BFS {
    private:
        typedef struct vertex {
            char label; /**< Label of the vertex */
            bool visited; /**< Flag to check if the vertex is visited */
        } Vertex;

        array<int, MAX_SIZE> graphQueue; /**< Array to store stack elements */
        int queueSize = 0;
        int rear = -1;
        int front = 0;

        array<Vertex*, MAX_SIZE> vertices; /**< Array of vertices */
        int vertexCounter = 0; /**< Counter for the number of vertices */
        array<array<int, MAX_SIZE>, MAX_SIZE> adjacencyMatrix; /**< Adjacency matrix */

    public:
        

        /**
         * @brief Constructor to initialize the stack with a given size.
         */
        BFS();

        void enqueue(int item);

        int dequeue();

        void addVertex(char label);

        void addEdge(int orig, int dest);

        void breadthFirstSearch();

        bool isQueueEmpty();
};