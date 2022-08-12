class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]<0){
                cnt+=n;
            }
            else{
                for(int j=0;j<n;j++){
                    if(grid[i][j]<0)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};