class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(nums.size()+1,0);
        vector<int> v(2);

        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==2)
                v[0]=i;
            if(ans[i]==0)
                v[1]=i;
        }
        return v;
    }
};