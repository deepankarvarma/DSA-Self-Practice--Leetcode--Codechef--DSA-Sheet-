class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxs=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int temp=accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxs=max(maxs,temp);
        }
        return maxs;
    }
};