#include <iostream>
#include <vector>
#include <queue>

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
void BFS(int start)
{
    std::queue<int> q;
    std::vector<bool> visited(V,false);
    q.push(start);
    visited[start]= true;

    while (!q.empty())
    {
        int node = q.front();
        std::cout<<node<<" ";
        q.pop();
        for(auto neighbour : adj[node])
        {
            if(!visited[neighbour]){
                visited[neighbour]=true;    
                q.push(neighbour);
            }
            
        }
    }
    
}
};

int main()
{
    Graph g(6);
    // For directed graph, pass `true`; for undirected graph, pass `false`
    g.addEdge(0, 1, false);  // Undirected edge between 0 and 1
    g.addEdge(0, 2, false);
    g.addEdge(1, 3, false);
    g.addEdge(2, 3, false);
    g.addEdge(3, 4, false);
    g.addEdge(4, 5, false);
    std::cout << "BFS starting from node 0: ";
    g.BFS(0);
    return 0;
}