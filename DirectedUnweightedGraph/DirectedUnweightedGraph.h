#pragma once
#include <vector>
#include <queue>
#include <stack>

#include <iostream>
using namespace std;
class DirectedUnweightedGraph
{
private:
	class Edge {
	public:
		int source, destination;
	};
	int numOfVertices;
	vector<vector<int>> adjacencyList;

public:
	DirectedUnweightedGraph(int count);
	void addEdge(Edge edge);
	void BFS(int start);
	void DFS(int start);
};

