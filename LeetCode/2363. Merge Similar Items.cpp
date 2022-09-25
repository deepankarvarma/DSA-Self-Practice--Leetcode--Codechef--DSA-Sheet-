class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        unordered_map<int,int> m1;
        for(int i=0;i<items1.size();i++){
            m1[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            m1[items2[i][0]]+=items2[i][1];
        }
        for(auto i:m1){
            vector<int> v;
            v.push_back(i.first);
            v.push_back(i.second);
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};