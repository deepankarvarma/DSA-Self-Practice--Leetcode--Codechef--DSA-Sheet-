class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        int rows=strs.size();
        int col=strs[0].size();
        for(int i=0;i<col;i++){
            for(int j=0;j<rows-1;j++){
                if((strs[j][i])>(strs[j+1][i])){
                    cnt++;
                    break;
                    
                }
            }
            
        }
        return cnt;
    }
};