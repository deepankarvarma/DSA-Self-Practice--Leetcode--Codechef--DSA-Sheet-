class Solution {
public:
    void dfs(vector<vector<int>> &graph, vector<bool> &visited, int curr) {
        visited[curr] = 1;
        for(auto it: graph[curr]) 
            if(!visited[it]) dfs(graph, visited, it);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<vector<int>> graph(n);
        for(int i=0;i<n;i++) {
            for(auto it: rooms[i])
                graph[i].push_back(it);
        }
        vector<bool> visited(n,0);
        dfs(graph, visited, 0);
        for(auto it: visited) if(it==false) return false;
        return true;
    }
};