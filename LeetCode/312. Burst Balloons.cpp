class Solution {
public:
    int dp[301][301];
    int func(vector<int> &v,int i,int j){
        if (i>j){
            return 0;
        }
        
        if (dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int val=0;
        for (int k=i; k<=j; k++){
            val=max(val,v[k]*v[i-1]*v[j+1]+func(v,i,k-1)+func(v,k+1,j));
        }
        
     return dp[i][j]=val;
    }
    
    int maxCoins(vector<int>& v) {
        memset(dp,-1,sizeof(dp));
        int n=v.size();
        v.push_back(1);
        v.insert(v.begin(),1);
        return func(v,1,n);
    }
};