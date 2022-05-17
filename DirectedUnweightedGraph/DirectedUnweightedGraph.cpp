#include "DirectedUnweightedGraph.h"
#include <vector>
#include <queue>
#include <stack>

using namespace std;

DirectedUnweightedGraph::DirectedUnweightedGraph(int count)
{
	this->numOfVertices = count;
	this->adjacencyList.resize(count);
}

void DirectedUnweightedGraph::addEdge(Edge edge)
{
	//adjacencyList[edge.source].push_back(edge.destination);
	//numOfVertices++;

	if(edge.source >= 0 && edge.source < numOfVertices&& edge.destination < numOfVertices) {
		adjacencyList[edge.source].push_back(edge.destination);
	}
}

void DirectedUnweightedGraph::BFS(int start)
{
	if (numOfVertices == 0)
		return;

	vector<bool> visited(numOfVertices, false);
	queue <int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		cout << temp << " ";
		for (int i = 0; i < adjacencyList[temp].size(); i++) {
			int dest = adjacencyList[temp][i];
			if (visited[dest] == false) {
				q.push(dest);
				visited[dest] = true;
			}
		}
	}
}

void DirectedUnweightedGraph::DFS(int start)
{
	if (numOfVertices == 0)
		return;

	vector<bool> visited(numOfVertices, false);
	stack <int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int temp = q.top();
		q.pop();
		cout << temp << " ";
		for (int i = 0; i < adjacencyList[temp].size(); i++) {
			int dest = adjacencyList[temp][i];
			if (visited[dest] == false) {
				q.push(dest);
				visited[dest] = true;
			}
		}
	}
}
