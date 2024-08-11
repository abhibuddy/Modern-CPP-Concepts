#include <iostream>
#include <queue>
#include <vector>

class Graph{
    int v;
    std::vector<std::vector<int>> adjlist;
public:
    Graph(int V);
    void DFS(int s);
    void addEdge(int v, int w);
    void BFS(int s);
    void DFSUntil(int v, std::vector<bool>& visited);
};

Graph::Graph(int V)
{
    this->v = V;
    adjlist.resize(v);
}
void Graph::addEdge(int v,int w)
{
    adjlist[v].push_back(w);
    adjlist[w].push_back(v);
}

void Graph::BFS(int s)
{
    std::vector<bool> visited(this->v,false);
    std::queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        std::cout<<v<<" ";
        for(auto i : adjlist[v])
        {
            if(!visited[i])
            {
                visited[i]= true;
                q.push(i);
            }
        }
    }
    std::cout<<std::endl;
}
void Graph::DFSUntil(int s, std::vector<bool>& visited)
{
    visited[s] = true;
    std::cout<<s<<" ";
    for(auto i : adjlist[s])
    {
        if(!visited[i])
        {
            DFSUntil(i,visited);
        }
    }
}
void Graph::DFS(int s)
{
    std::vector<bool> visited(v,false);
    DFSUntil(s,visited);
    std::cout<<std::endl;
}
int main() {
    Graph g(6); // Create a graph with 6 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    std::cout << "BFS starting from vertex 0:" << std::endl;
    g.BFS(0);

    std::cout << "DFS starting from vertex 0:" << std::endl;
    g.DFS(0);

    return 0;
}