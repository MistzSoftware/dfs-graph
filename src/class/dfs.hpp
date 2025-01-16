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
class DFS {
    private:
        /**
         * @struct Vertex
         * @brief A structure to represent a vertex in the graph.
         */
        typedef struct vertex {
            char label; /**< Label of the vertex */
            bool visited; /**< Flag to check if the vertex is visited */
        } Vertex;

        array<int, MAX_SIZE> graphStack; /**< Array to store stack elements */
        int top = -1; /**< Counter for the number of vertices in the stack */
        array<Vertex*, MAX_SIZE> vertices; /**< Array of vertices */
        int vertexCounter = 0; /**< Counter for the number of vertices */
        array<array<int, MAX_SIZE>, MAX_SIZE> adjacencyMatrix; /**< Adjacency matrix */
    public:
        

        /**
         * @brief Constructor to initialize the stack with a given size.
         */
        DFS();

        /**
         * @brief Pushes an item onto the stack.
         * 
         * @param item The item to be pushed onto the stack.
         */
        void push(int item);

        /**
         * @brief Pops an item from the stack.
         * 
         * @return The item popped from the stack.
         */
        int pop();

        /**
         * @brief Peeks at the top item of the stack without removing it.
         * 
         * @return The item at the top of the stack.
         */
        int peek();

        /**
         * @brief Checks if the stack is empty.
         * 
         * @return true if the stack is empty, false otherwise.
         */
        bool isStackEmpty();

        /**
         * @brief Adds a vertex to the graph.
         * 
         * @param label The label of the vertex to be added.
         */
        void addVertex(char label);

        /**
         * @brief Adds an edge between two vertices in the graph.
         * 
         * @param orig The index of the origin vertex.
         * @param dest The index of the destination vertex.
         */
        void addEdge(int orig, int dest);

        /**
         * @brief Performs a depth-first search on the graph.
         */
        void depthFirstSearch();

        /**
         * @brief Gets an adjacent unvisited vertex.
         * 
         * @param vertexindex The index of the vertex.
         * @return The index of the adjacent unvisited vertex.
         */
        int getAdjUnvisitedVertex(int vertexindex);
};