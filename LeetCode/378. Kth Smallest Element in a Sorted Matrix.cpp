class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> n;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                n.push_back(matrix[i][j]);
            }
        }
        sort(n.begin(),n.end());
        return n[k-1];
    }
};