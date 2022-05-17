
#include <iostream>
#include "DirectedUnweightedGraph.h"

int main()
{
    DirectedUnweightedGraph graph(7);
    graph.addEdge({ 0,1 });
    graph.addEdge({ 0,2 });
    graph.addEdge({ 0,3 });
    graph.addEdge({ 1,4 });
    graph.addEdge({ 2,6 });
    graph.addEdge({ 4,5 });

    graph.BFS(0);

    graph.DFS(0);

}

