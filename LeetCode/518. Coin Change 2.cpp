class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int subset[n+1][amount+1];
        for(int i=0;i<n+1;i++){
        for(int j=0;j<amount+1;j++){
            if(i==0)
            subset[i][j]=0;
            if(j==0)
            subset[i][j]=1;
        }
 }
        for(int i=1;i<n+1;i++){
        for(int j=0;j<amount+1;j++){
            if(coins[i-1]<=j){
                subset[i][j]=subset[i-1][j]+subset[i][j-coins[i-1]];
            }
            else if (coins[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
        int result =subset[n][amount];
        return result;
    }
};