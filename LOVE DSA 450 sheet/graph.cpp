#include <iostream>
#include <vector>
#include <list>
#include <queue>

class Graph
{
private:
int v;
std::vector<std::list<int>> adjlist;
public:
Graph(int V) :v(V){
    adjlist.resize(v);
}
// undirectional
void addEdge(int v,int w)
{
    adjlist[v].push_back(w);
    adjlist[w].push_back(v);
}

void printGraph()
{
    for(int i = 0;i<v;i++)
    {
        std::cout<<"adjency list of vertex "<<i<<":"<<std::endl;
        for(auto ele : adjlist[i])
        {
            std::cout<<ele<<" ";
        }
        std::cout<<std::endl;
    }
}
void bfs(int startvertex)
{
    // to keep track of edges that has already been visited
 std::vector<bool> visited(v,false);
 std::queue<int> q;

 q.push(startvertex);
 visited[startvertex]=true;
 std::cout<<"BFS starting from vertex "<<startvertex<<std::endl;
 while(!q.empty())
 {
    int currenvertex = q.front();
    std::cout<<currenvertex<<" ";
    q.pop();

    for(auto adjvertx : adjlist[currenvertex])
    {
        if(!visited[adjvertx]){
            visited[adjvertx] = true;
            q.push(adjvertx);
        }
    }
    std::cout<<std::endl;
 }


}
};


int main() {

    Graph g(5);
        // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print the graph
    g.printGraph();
    g.bfs(0);
    return 0;
}