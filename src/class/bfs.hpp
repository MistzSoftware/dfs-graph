#pragma once
#include <iostream>
#include <array>

using namespace std;

#define MAX_SIZE 5

/**
 * @class BFS
 * @brief A class to represent the Breadth-First Search (BFS) algorithm for graph traversal.
 * 
 * This class provides methods to perform BFS on a graph represented by an adjacency matrix.
 * It includes functionalities to add vertices and edges, and to traverse the graph using BFS.
 */
class BFS {
    private:
        /**
         * @struct vertex
         * @brief A structure to represent a vertex in the graph.
         * 
         * @var label
         * Label of the vertex.
         * 
         * @var visited
         * Flag to check if the vertex is visited.
         */
        typedef struct vertex {
            char label; /**< Label of the vertex */
            bool visited; /**< Flag to check if the vertex is visited */
        } Vertex;

        array<int, MAX_SIZE> graphQueue; /**< Array to store queue elements */
        int queueSize = 0;
        int rear = -1;
        int front = 0;

        array<Vertex*, MAX_SIZE> vertices; /**< Array of vertices */
        int vertexCounter = 0; /**< Counter for the number of vertices */
        array<array<int, MAX_SIZE>, MAX_SIZE> adjacencyMatrix; /**< Adjacency matrix */

    public:
        /**
         * @brief Constructor to initialize the BFS object.
         */
        BFS();

        /**
         * @brief Enqueue an item into the queue.
         * 
         * @param item The item to be enqueued.
         */
        void enqueue(int item);

        /**
         * @brief Dequeue an item from the queue.
         * 
         * @return The dequeued item.
         */
        int dequeue();

        /**
         * @brief Add a vertex to the graph.
         * 
         * @param label The label of the vertex to be added.
         */
        void addVertex(char label);

        /**
         * @brief Add an edge between two vertices in the graph.
         * 
         * @param orig The index of the origin vertex.
         * @param dest The index of the destination vertex.
         */
        void addEdge(int orig, int dest);

        /**
         * @brief Perform Breadth-First Search (BFS) on the graph.
         */
        void breadthFirstSearch();

        /**
         * @brief Check if the queue is empty.
         * 
         * @return True if the queue is empty, false otherwise.
         */
        bool isQueueEmpty();

        /**
         * @brief Get the index of an adjacent unvisited vertex.
         * 
         * @param vertexindex The index of the vertex.
         * @return The index of the adjacent unvisited vertex, or -1 if none exists.
         */
        int getAdjUnvisitedVertex(int vertexindex);
};