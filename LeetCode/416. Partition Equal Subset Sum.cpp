class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        else {
            int n=nums.size();
            bool subset[n+1][sum/2+1];
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum/2+1;j++){
                    if(i==0)
                        subset[i][j]=false;
                    if(j==0)
                        subset[i][j]=true;
                }
            }
            for(int i=1;i<n+1;i++){
                for(int j=1;j<sum/2+1;j++){
                    if(nums[i-1]<=j){
                        subset[i][j]=subset[i-1][j-nums[i-1]] || subset[i-1][j];
                    }
                    else if (nums[i-1]>j)
                        subset[i][j]=subset[i-1][j];
                }
            }
            return subset[n][sum/2];
        }
    }
};