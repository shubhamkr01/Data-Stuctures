/*
Breadth first traversal of a directed graph
*/

#include <bits/stdc++.h>
using namespace std;

class Graph{
  int v; //no of vertices
  vector<list<int>> adj;
public:
  void addEdge(int u, int v);
  void setV(int n);
  void bfs(int s);
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

void Graph::bfs (int s)
{
  vector<bool> visited(v, false);
  queue<int> q;
  q.push(s);
  visited[s] = true;
  cout << "Breadth first traversal of given graph is : "<< endl;
  cout << s;
  while(!q.empty())
  {
  	int u = q.front();
  	q.pop();
  	
  	for(auto& i : adj[u])
  	{
  	  if(!visited[i])
  	  {
  		  visited[i] = true;
  		  q.push(i);
  		  cout << " " << i ; 
  	  }
 	  }
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
	
	g.bfs(0);
return 0;
}
