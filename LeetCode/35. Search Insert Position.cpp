class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size()-1;
        if(target>nums[n])
            return n+1;
        else if(target<nums[0])
            return 0;
        else{
            for(int i=0;i<=n;i++){
                if(nums[i]>=target)
                    return i;
                
            }
        }
        return -1;
    }
};