class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        vector<int> store(100);
        for(int i=0;i<nums.size();i++){
            store[nums[i]-1]++;
        }
        for(int i=0;i<nums.size();i++){
            if(store[nums[i]-1]==1)
                ans+=nums[i];
        }
        return ans;
    }
};