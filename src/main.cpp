#include <iostream>
#include <vector>
#include <array>
#include "class/dfs.hpp"
#include "class/bfs.hpp"

using namespace std;



int main(){
    //////////////////////////////////////////////
    ///////////////// DFS ////////////////////////
    //////////////////////////////////////////////
    DFS dfs;

    //add vertices
    dfs.addVertex('S');
    dfs.addVertex('A');
    dfs.addVertex('B');
    dfs.addVertex('C');
    dfs.addVertex('D');

    //update adjacency matrix
    dfs.addEdge(0, 1);
    dfs.addEdge(0, 2);
    dfs.addEdge(0, 3);
    dfs.addEdge(1, 4);
    dfs.addEdge(2, 4);
    dfs.addEdge(3, 4);

    dfs.depthFirstSearch();

    //////////////////////////////////////////////
    ///////////////// BFS ////////////////////////
    //////////////////////////////////////////////
    BFS bfs;

    //add vertices
    bfs.addVertex('S');
    bfs.addVertex('A');
    bfs.addVertex('B');
    bfs.addVertex('C');
    bfs.addVertex('D');

    //update adjacency matrix
    bfs.addEdge(0, 1);
    bfs.addEdge(0, 2);
    bfs.addEdge(0, 3);
    bfs.addEdge(1, 4);
    bfs.addEdge(2, 4);
    bfs.addEdge(3, 4);

    bfs.breadthFirstSearch();

    return 0;
}