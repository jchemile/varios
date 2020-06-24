#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge{
    int src, dest;
};


class Graph
{
public:
    vector<vector<int>> adjList;

    Graph(const vector<Edge> &edges, int N)
    {
        adjList.resize(N);

        for (const Edge &edge: edges){
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
}; 

vector<Edge> BFS(Graph const &graph, int N, int v)
{
    vector<Edge> edges;
    vector<bool> discovered(N);
    discovered[v] = true;
    queue<int> q;
    q.push(v);

    while(!q.empty())
    {
        v = q.front();
        q.pop();

        for(int u: graph.adjList[v])
        {
            if(!discovered[u])
            {
                discovered[u] = true;

                edges.push_back({u, v});

                q.push(u);
            }
        }
    }
    return edges;
}

void directGraphFromUndirectedGraph() 
{
    vector<Edge> edges = {
        {1, 2}, {1, 3}, {2, 4}, {3, 4}, {3, 5}, {4, 5}, {4, 6}
    };

    int N = 7;

    Graph graph(edges, N);

    int vertex = 1;

    edges = BFS(graph, N, vertex);

    Graph digraph(edges, N);
}

