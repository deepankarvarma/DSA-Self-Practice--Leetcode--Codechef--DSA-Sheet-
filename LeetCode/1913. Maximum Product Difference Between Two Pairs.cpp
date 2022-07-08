class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int minn=nums[0]*nums[1];
        int maxn=nums[n-1]*nums[n-2];
        return maxn-minn;
    }
};