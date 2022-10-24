class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        if(nums.size()==1)
            return 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums[i]++;
                cnt++;
            }
            else if(nums[i]<nums[i-1]){
                cnt+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
                
            }
        }
        return cnt;
    }
};