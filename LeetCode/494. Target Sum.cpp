class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
    int n=nums.size();
    int sarray=0;
    for(int i=0;i<n;i++){
        sarray+=nums[i];
    }
    if(sarray<target || (sarray+target)%2==1)
    return 0;
    int sum=(abs(target)+sarray)/2;
    int subset[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
            subset[i][j]=0;
            if(j==0)
            subset[i][j]=1;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(nums[i-1]<=j)
            subset[i][j]=subset[i-1][j]+subset[i-1][j-nums[i-1]];
            else if (nums[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    int ans=subset[n][sum];
        return ans;
    }
};