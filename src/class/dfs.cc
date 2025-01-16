#include "dfs.hpp"

DFS::DFS(){
     //adjacency matrix init
    for(int i = 0; i < MAX_SIZE; i++){
        for(int j = 0; j < MAX_SIZE; j++){
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void DFS::push(int item){
    graphStack[++top] = item;
}

int DFS::pop(){
    return graphStack[--top];
}

int DFS::peek(){
    return graphStack[top];
}

bool DFS::isStackEmpty(){
    return top == -1;
}



void DFS::addVertex(char label){
    Vertex* vertex = new Vertex;
    vertex->label = label;
    vertex->visited = false;
    vertices[vertexCounter++] = vertex;
}

void DFS::addEdge(int orig, int dest){
    adjacencyMatrix[orig][dest] = 1;
    adjacencyMatrix[dest][orig] = 1;
}

void DFS::depthFirstSearch(){
    cout << "DFS:" << endl;
    cout << vertices[0]->label << endl;
    vertices[0]->visited = true;
    push(0);

    while(!isStackEmpty()){
        //get the unvisited vertex of vertex which is at top of the stack
        int unvisitedIdx = getAdjUnvisitedVertex(peek());

        //no adjacent vertex found
        if(unvisitedIdx == -1){
            pop();
        } else {
            vertices[unvisitedIdx]->visited = true;
            cout << vertices[unvisitedIdx]->label << endl;
            push(unvisitedIdx);
        }
    }
}

int DFS::getAdjUnvisitedVertex(int vertexindex){
    for(int i = 0; i < vertexCounter; i++){
        if(adjacencyMatrix[vertexindex][i] == 1 && vertices[i]->visited == false){
            return i;
        }
    }
    return -1;
}