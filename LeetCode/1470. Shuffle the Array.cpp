class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int size=n;
        for(int i=0;i<size;i++){
            res.push_back(nums[i]);
            res.push_back(nums[size+i]);
        }
   
    return res;}
};