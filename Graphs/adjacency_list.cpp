/*
 Representation of a directed graph using adjacency list
*/
#include <bits/stdc++.h>
using namespace std;

class Graph
{
  int v; //no of vertices
  vector<list<int>> adj; // adjacency list for each vertex
public:
  void addEdge(int u, int v);
  void setV(int n);
  void printGraph();
};


void Graph::setV(int n)
{
  this->v = n;
  adj.resize(n);
  return;
}

void Graph::addEdge(int u, int v)
{
  auto& li = this->adj;
  li[u].push_back(v);
  return;
}

void Graph::printGraph()
{
  for(int i = 0; i < v; i++)
  {
    cout<<" Adjacency list for " << i << " is : head";
    for(auto j : adj[i])
    {
      cout << "-> " << j ;
    }
  cout << endl;
  }
  return;
}

int main()
{
  Graph g;

  g.setV(5);
  g.addEdge(0, 1);
  g.addEdge(0, 3);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(0, 4);
  g.addEdge(3, 4);
  g.addEdge(4, 0);
  g.printGraph();
  
  return 0;
}
