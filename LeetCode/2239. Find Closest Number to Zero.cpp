class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=INT_MAX;
        int res=0;
        for(int i=0;i<nums.size();i++){
            a=min(abs(nums[i]),a);
            if(a==abs(nums[i]))
                res=nums[i];
        }
        return res;
    }
};