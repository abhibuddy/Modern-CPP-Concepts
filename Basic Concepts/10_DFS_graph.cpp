#include <iostream>
#include <vector>
class Graph
{
public:
int V;
std::vector<std::vector<int>> adj;
Graph(int v):V(v)
{
    adj.resize(V);
}
void addEdge(int u,int v,bool isdirected)
{
    adj[u].push_back(v);
    if(isdirected)
    {
        adj[v].push_back(u);
    }

}
void DFSUntil(int start,std::vector<bool>& visited)
{
    std::cout<<start<<" ";
    visited[start] = true;
    for(auto neighbour: adj[start])
    {
        if(!visited[neighbour])
        {
            DFSUntil(neighbour,visited);
        }
    }
}
void DFS(int start)
{
    std::vector<bool> visited(V,false);
    DFSUntil(start,visited);
}

};

int main()
{
        // Create a graph with 6 vertices
    Graph g(6);

    // Add edges (for an undirected graph, pass false)
    g.addEdge(0, 1, false);
    g.addEdge(0, 2, false);
    g.addEdge(1, 3, false);
    g.addEdge(2, 3, false);
    g.addEdge(3, 4, false);
    g.addEdge(4, 5, false);

    // Perform DFS starting from node 0
    std::cout << "DFS starting from node 0: ";
    g.DFS(0);

    return 0;
}
