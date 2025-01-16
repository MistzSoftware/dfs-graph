#include "bfs.hpp"

BFS::BFS(){
    
}

void BFS::enqueue(int item){
    graphQueue[++rear] = item;
    ++queueSize;
}

int BFS::dequeue(){
    --queueSize;
    return graphQueue[++front];
}

bool BFS::isQueueEmpty(){
    return queueSize == 0;
}

void BFS::addVertex(char label){
    Vertex* vertex = new Vertex;
    vertex->label = label;
    vertex->visited = false;
    vertices[vertexCounter++] = vertex;
}

void BFS::addEdge(int orig, int dest){
    adjacencyMatrix[orig][dest] = 1;
    adjacencyMatrix[dest][orig] = 1;
}

void BFS::breadthFirstSearch(){
    cout << "BFS:" << endl;
    cout << vertices[0]->label << endl;
    vertices[0]->visited = true;
    enqueue(0);

    while(!isQueueEmpty()){
        int vertexIdx = dequeue();
        int unvisitedIdx;

        // while((unvisitedIdx = getAdjUnvisitedVertex(vertexIdx)) != -1){
        //     vertices[unvisitedIdx]->visited = true;
        //     cout << vertices[unvisitedIdx]->label << endl;
        //     enqueue(unvisitedIdx);
        // }
    }
}