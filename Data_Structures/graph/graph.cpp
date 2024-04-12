#include <iostream>
#include <vector>
#include <list>

class Graph
{
    public:
    Graph(int versize): V(versize){
        adjList.resize(versize);
    }
    void addEdge(int u,int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    void printGraph()
    {
        for(int i=0;i<V;i++)
        {
            std::cout<<"adjency list for vector "<<i<<std::endl;
            for(auto neighbour: adjList[i])
            {
                std::cout<<neighbour<<" ";
            }
            std::cout<<std::endl;
        }
    }
    private:
    int V; // number of vertex
    std::vector<std::list<int>> adjList;
};

int main()
{
      // Create a graph with 5 vertices
    Graph g(5);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.printGraph();
    return 0;
}