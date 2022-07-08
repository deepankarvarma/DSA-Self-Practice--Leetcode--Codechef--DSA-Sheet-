class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        int lm=0;
       for(int i=0;i<accounts.size();i++){
           for(int j=0;j<accounts[i].size();j++){
               lm+=accounts[i][j];
              
           }
           if(m<lm)
               m=lm;
           lm=0;
       }
        
        
        return m;
    }
};