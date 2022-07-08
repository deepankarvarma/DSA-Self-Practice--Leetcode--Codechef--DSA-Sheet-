class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        vector<vector<int>> res1;
        res1.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
            res1.push_back(nums);
        }
        return res1;
    }
    
};