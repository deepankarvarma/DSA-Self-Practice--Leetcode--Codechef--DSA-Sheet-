// I/P:- n m , n is the number of nodes and m is the number of edges
// The next m lines will contain the nodes between which an edge is present
// In case of undirected graph order is insignificant but in case of directed it is significant
// Now how to store these next m lines of code, 1st way

// Adjacency Matrix :-
// We declare a [n+1][n+1] sized array and intialize it with 0. If a edge is present 
// we replace the value of 0 with 1 for the particular nodes.
// adj[u][v]=1 && adj[v][u]=1;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int adj[n+1][n+1]={}; // They will store from edges 0 to n
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1;  //The node numbers are starting from 1
//         adj[v][u]=1;
//     }
//     // Printing adjacency matrix:-
//     // for(int i=0;i<n+1;i++){
//     //     for(int j=0;j<n+1;j++){
//     //         cout<<adj[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     return 0;
// }
// Ajdacency Matrix is good for storing less number of nodes as it has time compl. n^2
// So we use ajdacency list
// 2) Adjacency List
// vector<int> adj[6];
// adj[v].push_back(u) & adj[u].push_back(v);
// for weighted graph vector<pair<int,int>> adj first int for node and second for weight
// adj[v].push_back({u,w});

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     // Printing Adjacency list
//     for(int i=0;i<n+1;i++){
//         cout<<i<<" ->";
//         for(int j=0;j<adj[i].size();j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
