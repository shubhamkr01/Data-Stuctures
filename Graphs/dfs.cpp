#include <bits/stdc++.h>
using namespace std;

class Graph
{
  int v; //no of vertices
  vector<list<int>> adj;
public:
  void addEdge(int u, int v);
  void setV(int n);
  void dfs(int s);
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

void Graph::dfs(int s)
{
	//visited vector
	static vector<bool> visited(v, false);
	
	//check current
	if(!visited[s])
	{
		visited[s] = true;
		cout<<s << " ";
	}
	
	//recursive call
	for(auto& i : adj[s])
	{
		if(!visited[i])
		{
			dfs(i);
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
  cout<<"DFS for vertex 0 " << "is :"; 
  g.dfs(0);
  return 0;
}
