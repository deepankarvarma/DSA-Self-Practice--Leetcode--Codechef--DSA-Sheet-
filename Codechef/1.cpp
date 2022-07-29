#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src, dest;
};

class Graph
{
public:
   
    vector<vector<int>> adjList;
  Graph(vector<Edge> const &edges, int n)
    {
      
        adjList.resize(n);
 
        for (auto &edge: edges)
        {

            adjList[edge.src].push_back(edge.dest);
        }
    }
};


int main()
{
    vector<Edge> edges;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Edge e;
            e.src=j;
            e.dest=i;
           if(i>j && (i+1)%(j+1)==0){ 
            
            edges.push_back(e);
            }
        }
    }
    Graph graph(edges, n);
    
 
    return 0;
}