#include <iostream>
#include <vector>
#include <array>
#include "class/dfs.hpp"

using namespace std;



int main(){
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

    return 0;
}