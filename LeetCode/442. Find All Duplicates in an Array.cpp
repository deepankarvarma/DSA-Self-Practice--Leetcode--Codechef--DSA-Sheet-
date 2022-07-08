class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int temp=0;
        sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++){
             
           if(nums[i]==temp ){
               res.push_back(nums[i]);
                    // temp=nums[i];
               
            }
             temp=nums[i];
         }
        return res;
    }
};