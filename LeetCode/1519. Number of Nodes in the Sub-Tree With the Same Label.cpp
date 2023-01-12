class Solution {
public:
    void dfs(vector<vector<int>> &G, 
             vector<int> &visited, 
             string &labels, 
             vector<int> &ans, 
             int v, 
             vector<int> &count 
    ){
        if(visited[v]) return;
        visited[v] = true;
         int curr_label = labels[v]-'a';
        int count_before_exploring_subtree = count[curr_label];
        
        count[curr_label]++;
        for( auto u : G[v] )
            if(!visited[u]) dfs( G, visited, labels, ans, u, count );
        
    
        int count_after_exploring_subtree = count[curr_label];
        ans[v] = count_after_exploring_subtree - count_before_exploring_subtree;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> ans(n);
        vector<vector<int>> G(n);
        for(auto &e : edges){
            G[e[0]].push_back(e[1]);
            G[e[1]].push_back(e[0]);
        }
        vector<int> visited(n,0);
        vector<int> count(26, 0);
        dfs( G, visited, labels, ans, 0, count);
        return ans;
    }
};

