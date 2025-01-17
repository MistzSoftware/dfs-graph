#include "bfs.hpp"

BFS::BFS(){
    //adjacency matrix init
    for(int i = 0; i < MAX_SIZE; i++){
        for(int j = 0; j < MAX_SIZE; j++){
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void BFS::enqueue(int item){
    graphQueue[++rear] = item;
    ++queueSize;
}

int BFS::dequeue(){
    --queueSize;
    return graphQueue[front++];
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
    vertices[0]->visited = true;
    enqueue(0);

    while(!isQueueEmpty()){
        int currentVertex = dequeue();
        cout << vertices[currentVertex]->label << endl;

        int adjVertex = getAdjUnvisitedVertex(currentVertex);
        while(adjVertex != -1){
            enqueue(adjVertex);
            vertices[adjVertex]->visited = true;
            adjVertex = getAdjUnvisitedVertex(currentVertex);
        }
    }
}

int BFS::getAdjUnvisitedVertex(int vertexindex){
    for(int i = 0; i < vertexCounter; i++){
        if(adjacencyMatrix[vertexindex][i] == 1 && vertices[i]->visited == false){
            return i;
        }
    }
    return -1;
}